;; Auto-generated. Do not edit!


(when (boundp 'hehe::pixhawk)
  (if (not (find-package "HEHE"))
    (make-package "HEHE"))
  (shadow 'pixhawk (find-package "HEHE")))
(unless (find-package "HEHE::PIXHAWK")
  (make-package "HEHE::PIXHAWK"))

(in-package "ROS")
;;//! \htmlinclude pixhawk.msg.html


(defclass hehe::pixhawk
  :super ros::object
  :slots (_number _time _ground_speed _latitude _longitude _compass _altitude ))

(defmethod hehe::pixhawk
  (:init
   (&key
    ((:number __number) 0)
    ((:time __time) "")
    ((:ground_speed __ground_speed) 0)
    ((:latitude __latitude) 0.0)
    ((:longitude __longitude) 0.0)
    ((:compass __compass) 0.0)
    ((:altitude __altitude) 0.0)
    )
   (send-super :init)
   (setq _number (round __number))
   (setq _time (string __time))
   (setq _ground_speed (round __ground_speed))
   (setq _latitude (float __latitude))
   (setq _longitude (float __longitude))
   (setq _compass (float __compass))
   (setq _altitude (float __altitude))
   self)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:ground_speed
   (&optional __ground_speed)
   (if __ground_speed (setq _ground_speed __ground_speed)) _ground_speed)
  (:latitude
   (&optional __latitude)
   (if __latitude (setq _latitude __latitude)) _latitude)
  (:longitude
   (&optional __longitude)
   (if __longitude (setq _longitude __longitude)) _longitude)
  (:compass
   (&optional __compass)
   (if __compass (setq _compass __compass)) _compass)
  (:altitude
   (&optional __altitude)
   (if __altitude (setq _altitude __altitude)) _altitude)
  (:serialization-length
   ()
   (+
    ;; int16 _number
    2
    ;; string _time
    4 (length _time)
    ;; int16 _ground_speed
    2
    ;; float64 _latitude
    8
    ;; float64 _longitude
    8
    ;; float64 _compass
    8
    ;; float64 _altitude
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _number
       (write-word _number s)
     ;; string _time
       (write-long (length _time) s) (princ _time s)
     ;; int16 _ground_speed
       (write-word _ground_speed s)
     ;; float64 _latitude
       (sys::poke _latitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _longitude
       (sys::poke _longitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _compass
       (sys::poke _compass (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _altitude
       (sys::poke _altitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _number
     (setq _number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _time
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _time (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _ground_speed
     (setq _ground_speed (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float64 _latitude
     (setq _latitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _longitude
     (setq _longitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _compass
     (setq _compass (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _altitude
     (setq _altitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get hehe::pixhawk :md5sum-) "6565b0a16b4f72aa77fa6f71e435557d")
(setf (get hehe::pixhawk :datatype-) "hehe/pixhawk")
(setf (get hehe::pixhawk :definition-)
      "int16 number
string time
int16 ground_speed
float64 latitude
float64 longitude
float64 compass
float64 altitude

")



(provide :hehe/pixhawk "6565b0a16b4f72aa77fa6f71e435557d")


