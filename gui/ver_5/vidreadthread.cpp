#include "vidreadthread.h"
#include "includes.h"

using namespace cv;
extern MainWindow *mainPtr;

VidReadThread::VidReadThread(QString s) : name(s)
{
}

void VidReadThread::run()
{
    QThread::msleep(100);
    VideoCapture cap;
    cap.open("helicopter_with_stickers.mp4");
    while(1)
    {
        Mat image1;
       // Capture frame-by-frame
        cap >> image1;

       // If the frame is empty, break immediately
       if (image1.empty())
         break;

       QImage image2 = QImage((uchar*) image1.data, image1.cols, image1.rows, image1.step, QImage::Format_RGB888);
       mainPtr->ui->label1->setPixmap(QPixmap::fromImage(image2));
    }
}
