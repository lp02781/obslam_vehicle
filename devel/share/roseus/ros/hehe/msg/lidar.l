;; Auto-generated. Do not edit!


(when (boundp 'hehe::lidar)
  (if (not (find-package "HEHE"))
    (make-package "HEHE"))
  (shadow 'lidar (find-package "HEHE")))
(unless (find-package "HEHE::LIDAR")
  (make-package "HEHE::LIDAR"))

(in-package "ROS")
;;//! \htmlinclude lidar.msg.html


(defclass hehe::lidar
  :super ros::object
  :slots (_number _angle_min _angle_max _angle_inc _time_inc _scan_time _range_min _range_max _range_size _count _countless _lidar_ranges_1 _lidar_ranges_2 _lidar_ranges_3 _lidar_ranges_4 _lidar_ranges_5 _lidar_ranges_6 _lidar_ranges_7 _lidar_ranges_8 _lidar_ranges_9 _lidar_ranges_10 _lidar_ranges_11 _lidar_ranges_12 _lidar_ranges_13 _lidar_ranges_14 _lidar_ranges_15 _lidar_ranges_16 _lidar_ranges_17 _lidar_ranges_18 _lidar_ranges_19 _lidar_ranges_20 _lidar_ranges_21 _lidar_ranges_22 _lidar_ranges_23 _lidar_ranges_24 ))

(defmethod hehe::lidar
  (:init
   (&key
    ((:number __number) 0)
    ((:angle_min __angle_min) 0.0)
    ((:angle_max __angle_max) 0.0)
    ((:angle_inc __angle_inc) 0.0)
    ((:time_inc __time_inc) 0.0)
    ((:scan_time __scan_time) 0.0)
    ((:range_min __range_min) 0.0)
    ((:range_max __range_max) 0.0)
    ((:range_size __range_size) 0)
    ((:count __count) 0)
    ((:countless __countless) 0)
    ((:lidar_ranges_1 __lidar_ranges_1) 0.0)
    ((:lidar_ranges_2 __lidar_ranges_2) 0.0)
    ((:lidar_ranges_3 __lidar_ranges_3) 0.0)
    ((:lidar_ranges_4 __lidar_ranges_4) 0.0)
    ((:lidar_ranges_5 __lidar_ranges_5) 0.0)
    ((:lidar_ranges_6 __lidar_ranges_6) 0.0)
    ((:lidar_ranges_7 __lidar_ranges_7) 0.0)
    ((:lidar_ranges_8 __lidar_ranges_8) 0.0)
    ((:lidar_ranges_9 __lidar_ranges_9) 0.0)
    ((:lidar_ranges_10 __lidar_ranges_10) 0.0)
    ((:lidar_ranges_11 __lidar_ranges_11) 0.0)
    ((:lidar_ranges_12 __lidar_ranges_12) 0.0)
    ((:lidar_ranges_13 __lidar_ranges_13) 0.0)
    ((:lidar_ranges_14 __lidar_ranges_14) 0.0)
    ((:lidar_ranges_15 __lidar_ranges_15) 0.0)
    ((:lidar_ranges_16 __lidar_ranges_16) 0.0)
    ((:lidar_ranges_17 __lidar_ranges_17) 0.0)
    ((:lidar_ranges_18 __lidar_ranges_18) 0.0)
    ((:lidar_ranges_19 __lidar_ranges_19) 0.0)
    ((:lidar_ranges_20 __lidar_ranges_20) 0.0)
    ((:lidar_ranges_21 __lidar_ranges_21) 0.0)
    ((:lidar_ranges_22 __lidar_ranges_22) 0.0)
    ((:lidar_ranges_23 __lidar_ranges_23) 0.0)
    ((:lidar_ranges_24 __lidar_ranges_24) 0.0)
    )
   (send-super :init)
   (setq _number (round __number))
   (setq _angle_min (float __angle_min))
   (setq _angle_max (float __angle_max))
   (setq _angle_inc (float __angle_inc))
   (setq _time_inc (float __time_inc))
   (setq _scan_time (float __scan_time))
   (setq _range_min (float __range_min))
   (setq _range_max (float __range_max))
   (setq _range_size (round __range_size))
   (setq _count (round __count))
   (setq _countless (round __countless))
   (setq _lidar_ranges_1 (float __lidar_ranges_1))
   (setq _lidar_ranges_2 (float __lidar_ranges_2))
   (setq _lidar_ranges_3 (float __lidar_ranges_3))
   (setq _lidar_ranges_4 (float __lidar_ranges_4))
   (setq _lidar_ranges_5 (float __lidar_ranges_5))
   (setq _lidar_ranges_6 (float __lidar_ranges_6))
   (setq _lidar_ranges_7 (float __lidar_ranges_7))
   (setq _lidar_ranges_8 (float __lidar_ranges_8))
   (setq _lidar_ranges_9 (float __lidar_ranges_9))
   (setq _lidar_ranges_10 (float __lidar_ranges_10))
   (setq _lidar_ranges_11 (float __lidar_ranges_11))
   (setq _lidar_ranges_12 (float __lidar_ranges_12))
   (setq _lidar_ranges_13 (float __lidar_ranges_13))
   (setq _lidar_ranges_14 (float __lidar_ranges_14))
   (setq _lidar_ranges_15 (float __lidar_ranges_15))
   (setq _lidar_ranges_16 (float __lidar_ranges_16))
   (setq _lidar_ranges_17 (float __lidar_ranges_17))
   (setq _lidar_ranges_18 (float __lidar_ranges_18))
   (setq _lidar_ranges_19 (float __lidar_ranges_19))
   (setq _lidar_ranges_20 (float __lidar_ranges_20))
   (setq _lidar_ranges_21 (float __lidar_ranges_21))
   (setq _lidar_ranges_22 (float __lidar_ranges_22))
   (setq _lidar_ranges_23 (float __lidar_ranges_23))
   (setq _lidar_ranges_24 (float __lidar_ranges_24))
   self)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:angle_min
   (&optional __angle_min)
   (if __angle_min (setq _angle_min __angle_min)) _angle_min)
  (:angle_max
   (&optional __angle_max)
   (if __angle_max (setq _angle_max __angle_max)) _angle_max)
  (:angle_inc
   (&optional __angle_inc)
   (if __angle_inc (setq _angle_inc __angle_inc)) _angle_inc)
  (:time_inc
   (&optional __time_inc)
   (if __time_inc (setq _time_inc __time_inc)) _time_inc)
  (:scan_time
   (&optional __scan_time)
   (if __scan_time (setq _scan_time __scan_time)) _scan_time)
  (:range_min
   (&optional __range_min)
   (if __range_min (setq _range_min __range_min)) _range_min)
  (:range_max
   (&optional __range_max)
   (if __range_max (setq _range_max __range_max)) _range_max)
  (:range_size
   (&optional __range_size)
   (if __range_size (setq _range_size __range_size)) _range_size)
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:countless
   (&optional __countless)
   (if __countless (setq _countless __countless)) _countless)
  (:lidar_ranges_1
   (&optional __lidar_ranges_1)
   (if __lidar_ranges_1 (setq _lidar_ranges_1 __lidar_ranges_1)) _lidar_ranges_1)
  (:lidar_ranges_2
   (&optional __lidar_ranges_2)
   (if __lidar_ranges_2 (setq _lidar_ranges_2 __lidar_ranges_2)) _lidar_ranges_2)
  (:lidar_ranges_3
   (&optional __lidar_ranges_3)
   (if __lidar_ranges_3 (setq _lidar_ranges_3 __lidar_ranges_3)) _lidar_ranges_3)
  (:lidar_ranges_4
   (&optional __lidar_ranges_4)
   (if __lidar_ranges_4 (setq _lidar_ranges_4 __lidar_ranges_4)) _lidar_ranges_4)
  (:lidar_ranges_5
   (&optional __lidar_ranges_5)
   (if __lidar_ranges_5 (setq _lidar_ranges_5 __lidar_ranges_5)) _lidar_ranges_5)
  (:lidar_ranges_6
   (&optional __lidar_ranges_6)
   (if __lidar_ranges_6 (setq _lidar_ranges_6 __lidar_ranges_6)) _lidar_ranges_6)
  (:lidar_ranges_7
   (&optional __lidar_ranges_7)
   (if __lidar_ranges_7 (setq _lidar_ranges_7 __lidar_ranges_7)) _lidar_ranges_7)
  (:lidar_ranges_8
   (&optional __lidar_ranges_8)
   (if __lidar_ranges_8 (setq _lidar_ranges_8 __lidar_ranges_8)) _lidar_ranges_8)
  (:lidar_ranges_9
   (&optional __lidar_ranges_9)
   (if __lidar_ranges_9 (setq _lidar_ranges_9 __lidar_ranges_9)) _lidar_ranges_9)
  (:lidar_ranges_10
   (&optional __lidar_ranges_10)
   (if __lidar_ranges_10 (setq _lidar_ranges_10 __lidar_ranges_10)) _lidar_ranges_10)
  (:lidar_ranges_11
   (&optional __lidar_ranges_11)
   (if __lidar_ranges_11 (setq _lidar_ranges_11 __lidar_ranges_11)) _lidar_ranges_11)
  (:lidar_ranges_12
   (&optional __lidar_ranges_12)
   (if __lidar_ranges_12 (setq _lidar_ranges_12 __lidar_ranges_12)) _lidar_ranges_12)
  (:lidar_ranges_13
   (&optional __lidar_ranges_13)
   (if __lidar_ranges_13 (setq _lidar_ranges_13 __lidar_ranges_13)) _lidar_ranges_13)
  (:lidar_ranges_14
   (&optional __lidar_ranges_14)
   (if __lidar_ranges_14 (setq _lidar_ranges_14 __lidar_ranges_14)) _lidar_ranges_14)
  (:lidar_ranges_15
   (&optional __lidar_ranges_15)
   (if __lidar_ranges_15 (setq _lidar_ranges_15 __lidar_ranges_15)) _lidar_ranges_15)
  (:lidar_ranges_16
   (&optional __lidar_ranges_16)
   (if __lidar_ranges_16 (setq _lidar_ranges_16 __lidar_ranges_16)) _lidar_ranges_16)
  (:lidar_ranges_17
   (&optional __lidar_ranges_17)
   (if __lidar_ranges_17 (setq _lidar_ranges_17 __lidar_ranges_17)) _lidar_ranges_17)
  (:lidar_ranges_18
   (&optional __lidar_ranges_18)
   (if __lidar_ranges_18 (setq _lidar_ranges_18 __lidar_ranges_18)) _lidar_ranges_18)
  (:lidar_ranges_19
   (&optional __lidar_ranges_19)
   (if __lidar_ranges_19 (setq _lidar_ranges_19 __lidar_ranges_19)) _lidar_ranges_19)
  (:lidar_ranges_20
   (&optional __lidar_ranges_20)
   (if __lidar_ranges_20 (setq _lidar_ranges_20 __lidar_ranges_20)) _lidar_ranges_20)
  (:lidar_ranges_21
   (&optional __lidar_ranges_21)
   (if __lidar_ranges_21 (setq _lidar_ranges_21 __lidar_ranges_21)) _lidar_ranges_21)
  (:lidar_ranges_22
   (&optional __lidar_ranges_22)
   (if __lidar_ranges_22 (setq _lidar_ranges_22 __lidar_ranges_22)) _lidar_ranges_22)
  (:lidar_ranges_23
   (&optional __lidar_ranges_23)
   (if __lidar_ranges_23 (setq _lidar_ranges_23 __lidar_ranges_23)) _lidar_ranges_23)
  (:lidar_ranges_24
   (&optional __lidar_ranges_24)
   (if __lidar_ranges_24 (setq _lidar_ranges_24 __lidar_ranges_24)) _lidar_ranges_24)
  (:serialization-length
   ()
   (+
    ;; int16 _number
    2
    ;; float32 _angle_min
    4
    ;; float32 _angle_max
    4
    ;; float32 _angle_inc
    4
    ;; float32 _time_inc
    4
    ;; float32 _scan_time
    4
    ;; float32 _range_min
    4
    ;; float32 _range_max
    4
    ;; int16 _range_size
    2
    ;; int16 _count
    2
    ;; int16 _countless
    2
    ;; float32 _lidar_ranges_1
    4
    ;; float32 _lidar_ranges_2
    4
    ;; float32 _lidar_ranges_3
    4
    ;; float32 _lidar_ranges_4
    4
    ;; float32 _lidar_ranges_5
    4
    ;; float32 _lidar_ranges_6
    4
    ;; float32 _lidar_ranges_7
    4
    ;; float32 _lidar_ranges_8
    4
    ;; float32 _lidar_ranges_9
    4
    ;; float32 _lidar_ranges_10
    4
    ;; float32 _lidar_ranges_11
    4
    ;; float32 _lidar_ranges_12
    4
    ;; float32 _lidar_ranges_13
    4
    ;; float32 _lidar_ranges_14
    4
    ;; float32 _lidar_ranges_15
    4
    ;; float32 _lidar_ranges_16
    4
    ;; float32 _lidar_ranges_17
    4
    ;; float32 _lidar_ranges_18
    4
    ;; float32 _lidar_ranges_19
    4
    ;; float32 _lidar_ranges_20
    4
    ;; float32 _lidar_ranges_21
    4
    ;; float32 _lidar_ranges_22
    4
    ;; float32 _lidar_ranges_23
    4
    ;; float32 _lidar_ranges_24
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _number
       (write-word _number s)
     ;; float32 _angle_min
       (sys::poke _angle_min (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _angle_max
       (sys::poke _angle_max (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _angle_inc
       (sys::poke _angle_inc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _time_inc
       (sys::poke _time_inc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _scan_time
       (sys::poke _scan_time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _range_min
       (sys::poke _range_min (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _range_max
       (sys::poke _range_max (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int16 _range_size
       (write-word _range_size s)
     ;; int16 _count
       (write-word _count s)
     ;; int16 _countless
       (write-word _countless s)
     ;; float32 _lidar_ranges_1
       (sys::poke _lidar_ranges_1 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_2
       (sys::poke _lidar_ranges_2 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_3
       (sys::poke _lidar_ranges_3 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_4
       (sys::poke _lidar_ranges_4 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_5
       (sys::poke _lidar_ranges_5 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_6
       (sys::poke _lidar_ranges_6 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_7
       (sys::poke _lidar_ranges_7 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_8
       (sys::poke _lidar_ranges_8 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_9
       (sys::poke _lidar_ranges_9 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_10
       (sys::poke _lidar_ranges_10 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_11
       (sys::poke _lidar_ranges_11 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_12
       (sys::poke _lidar_ranges_12 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_13
       (sys::poke _lidar_ranges_13 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_14
       (sys::poke _lidar_ranges_14 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_15
       (sys::poke _lidar_ranges_15 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_16
       (sys::poke _lidar_ranges_16 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_17
       (sys::poke _lidar_ranges_17 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_18
       (sys::poke _lidar_ranges_18 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_19
       (sys::poke _lidar_ranges_19 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_20
       (sys::poke _lidar_ranges_20 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_21
       (sys::poke _lidar_ranges_21 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_22
       (sys::poke _lidar_ranges_22 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_23
       (sys::poke _lidar_ranges_23 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lidar_ranges_24
       (sys::poke _lidar_ranges_24 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _number
     (setq _number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32 _angle_min
     (setq _angle_min (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _angle_max
     (setq _angle_max (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _angle_inc
     (setq _angle_inc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _time_inc
     (setq _time_inc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _scan_time
     (setq _scan_time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _range_min
     (setq _range_min (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _range_max
     (setq _range_max (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int16 _range_size
     (setq _range_size (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _count
     (setq _count (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _countless
     (setq _countless (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32 _lidar_ranges_1
     (setq _lidar_ranges_1 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_2
     (setq _lidar_ranges_2 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_3
     (setq _lidar_ranges_3 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_4
     (setq _lidar_ranges_4 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_5
     (setq _lidar_ranges_5 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_6
     (setq _lidar_ranges_6 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_7
     (setq _lidar_ranges_7 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_8
     (setq _lidar_ranges_8 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_9
     (setq _lidar_ranges_9 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_10
     (setq _lidar_ranges_10 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_11
     (setq _lidar_ranges_11 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_12
     (setq _lidar_ranges_12 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_13
     (setq _lidar_ranges_13 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_14
     (setq _lidar_ranges_14 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_15
     (setq _lidar_ranges_15 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_16
     (setq _lidar_ranges_16 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_17
     (setq _lidar_ranges_17 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_18
     (setq _lidar_ranges_18 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_19
     (setq _lidar_ranges_19 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_20
     (setq _lidar_ranges_20 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_21
     (setq _lidar_ranges_21 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_22
     (setq _lidar_ranges_22 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_23
     (setq _lidar_ranges_23 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lidar_ranges_24
     (setq _lidar_ranges_24 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get hehe::lidar :md5sum-) "c5f50167c14b9c625c4d23ea090650d0")
(setf (get hehe::lidar :datatype-) "hehe/lidar")
(setf (get hehe::lidar :definition-)
      "int16 number
float32 angle_min
float32 angle_max
float32 angle_inc
float32 time_inc
float32 scan_time
float32 range_min
float32 range_max
int16 range_size
int16 count
int16 countless
float32 lidar_ranges_1
float32 lidar_ranges_2
float32 lidar_ranges_3
float32 lidar_ranges_4
float32 lidar_ranges_5
float32 lidar_ranges_6
float32 lidar_ranges_7
float32 lidar_ranges_8
float32 lidar_ranges_9
float32 lidar_ranges_10
float32 lidar_ranges_11
float32 lidar_ranges_12
float32 lidar_ranges_13
float32 lidar_ranges_14
float32 lidar_ranges_15
float32 lidar_ranges_16
float32 lidar_ranges_17
float32 lidar_ranges_18
float32 lidar_ranges_19
float32 lidar_ranges_20
float32 lidar_ranges_21
float32 lidar_ranges_22
float32 lidar_ranges_23
float32 lidar_ranges_24


")



(provide :hehe/lidar "c5f50167c14b9c625c4d23ea090650d0")


