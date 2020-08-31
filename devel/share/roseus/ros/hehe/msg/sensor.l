;; Auto-generated. Do not edit!


(when (boundp 'hehe::sensor)
  (if (not (find-package "HEHE"))
    (make-package "HEHE"))
  (shadow 'sensor (find-package "HEHE")))
(unless (find-package "HEHE::SENSOR")
  (make-package "HEHE::SENSOR"))

(in-package "ROS")
;;//! \htmlinclude sensor.msg.html


(defclass hehe::sensor
  :super ros::object
  :slots (_number _throttle _rpm _speed _engine_load _temperature _humidity _engine_status _battery_status _battery_cap _air_pressure _air_temperature _torque _load _efficiency _voltage _current _discharge _hours _minutes _second _health ))

(defmethod hehe::sensor
  (:init
   (&key
    ((:number __number) 0)
    ((:throttle __throttle) 0)
    ((:rpm __rpm) 0)
    ((:speed __speed) 0)
    ((:engine_load __engine_load) 0.0)
    ((:temperature __temperature) 0)
    ((:humidity __humidity) 0)
    ((:engine_status __engine_status) "")
    ((:battery_status __battery_status) "")
    ((:battery_cap __battery_cap) 0)
    ((:air_pressure __air_pressure) 0)
    ((:air_temperature __air_temperature) 0)
    ((:torque __torque) 0)
    ((:load __load) 0)
    ((:efficiency __efficiency) 0)
    ((:voltage __voltage) 0)
    ((:current __current) 0)
    ((:discharge __discharge) 0)
    ((:hours __hours) 0)
    ((:minutes __minutes) 0)
    ((:second __second) 0)
    ((:health __health) "")
    )
   (send-super :init)
   (setq _number (round __number))
   (setq _throttle (round __throttle))
   (setq _rpm (round __rpm))
   (setq _speed (round __speed))
   (setq _engine_load (float __engine_load))
   (setq _temperature (round __temperature))
   (setq _humidity (round __humidity))
   (setq _engine_status (string __engine_status))
   (setq _battery_status (string __battery_status))
   (setq _battery_cap (round __battery_cap))
   (setq _air_pressure (round __air_pressure))
   (setq _air_temperature (round __air_temperature))
   (setq _torque (round __torque))
   (setq _load (round __load))
   (setq _efficiency (round __efficiency))
   (setq _voltage (round __voltage))
   (setq _current (round __current))
   (setq _discharge (round __discharge))
   (setq _hours (round __hours))
   (setq _minutes (round __minutes))
   (setq _second (round __second))
   (setq _health (string __health))
   self)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:throttle
   (&optional __throttle)
   (if __throttle (setq _throttle __throttle)) _throttle)
  (:rpm
   (&optional __rpm)
   (if __rpm (setq _rpm __rpm)) _rpm)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:engine_load
   (&optional __engine_load)
   (if __engine_load (setq _engine_load __engine_load)) _engine_load)
  (:temperature
   (&optional __temperature)
   (if __temperature (setq _temperature __temperature)) _temperature)
  (:humidity
   (&optional __humidity)
   (if __humidity (setq _humidity __humidity)) _humidity)
  (:engine_status
   (&optional __engine_status)
   (if __engine_status (setq _engine_status __engine_status)) _engine_status)
  (:battery_status
   (&optional __battery_status)
   (if __battery_status (setq _battery_status __battery_status)) _battery_status)
  (:battery_cap
   (&optional __battery_cap)
   (if __battery_cap (setq _battery_cap __battery_cap)) _battery_cap)
  (:air_pressure
   (&optional __air_pressure)
   (if __air_pressure (setq _air_pressure __air_pressure)) _air_pressure)
  (:air_temperature
   (&optional __air_temperature)
   (if __air_temperature (setq _air_temperature __air_temperature)) _air_temperature)
  (:torque
   (&optional __torque)
   (if __torque (setq _torque __torque)) _torque)
  (:load
   (&optional __load)
   (if __load (setq _load __load)) _load)
  (:efficiency
   (&optional __efficiency)
   (if __efficiency (setq _efficiency __efficiency)) _efficiency)
  (:voltage
   (&optional __voltage)
   (if __voltage (setq _voltage __voltage)) _voltage)
  (:current
   (&optional __current)
   (if __current (setq _current __current)) _current)
  (:discharge
   (&optional __discharge)
   (if __discharge (setq _discharge __discharge)) _discharge)
  (:hours
   (&optional __hours)
   (if __hours (setq _hours __hours)) _hours)
  (:minutes
   (&optional __minutes)
   (if __minutes (setq _minutes __minutes)) _minutes)
  (:second
   (&optional __second)
   (if __second (setq _second __second)) _second)
  (:health
   (&optional __health)
   (if __health (setq _health __health)) _health)
  (:serialization-length
   ()
   (+
    ;; int16 _number
    2
    ;; int16 _throttle
    2
    ;; int16 _rpm
    2
    ;; int16 _speed
    2
    ;; float32 _engine_load
    4
    ;; int16 _temperature
    2
    ;; int16 _humidity
    2
    ;; string _engine_status
    4 (length _engine_status)
    ;; string _battery_status
    4 (length _battery_status)
    ;; int16 _battery_cap
    2
    ;; int16 _air_pressure
    2
    ;; int16 _air_temperature
    2
    ;; int16 _torque
    2
    ;; int16 _load
    2
    ;; int16 _efficiency
    2
    ;; int16 _voltage
    2
    ;; int16 _current
    2
    ;; int16 _discharge
    2
    ;; int16 _hours
    2
    ;; int16 _minutes
    2
    ;; int16 _second
    2
    ;; string _health
    4 (length _health)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _number
       (write-word _number s)
     ;; int16 _throttle
       (write-word _throttle s)
     ;; int16 _rpm
       (write-word _rpm s)
     ;; int16 _speed
       (write-word _speed s)
     ;; float32 _engine_load
       (sys::poke _engine_load (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int16 _temperature
       (write-word _temperature s)
     ;; int16 _humidity
       (write-word _humidity s)
     ;; string _engine_status
       (write-long (length _engine_status) s) (princ _engine_status s)
     ;; string _battery_status
       (write-long (length _battery_status) s) (princ _battery_status s)
     ;; int16 _battery_cap
       (write-word _battery_cap s)
     ;; int16 _air_pressure
       (write-word _air_pressure s)
     ;; int16 _air_temperature
       (write-word _air_temperature s)
     ;; int16 _torque
       (write-word _torque s)
     ;; int16 _load
       (write-word _load s)
     ;; int16 _efficiency
       (write-word _efficiency s)
     ;; int16 _voltage
       (write-word _voltage s)
     ;; int16 _current
       (write-word _current s)
     ;; int16 _discharge
       (write-word _discharge s)
     ;; int16 _hours
       (write-word _hours s)
     ;; int16 _minutes
       (write-word _minutes s)
     ;; int16 _second
       (write-word _second s)
     ;; string _health
       (write-long (length _health) s) (princ _health s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _number
     (setq _number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _throttle
     (setq _throttle (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _rpm
     (setq _rpm (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _speed
     (setq _speed (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32 _engine_load
     (setq _engine_load (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int16 _temperature
     (setq _temperature (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _humidity
     (setq _humidity (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _engine_status
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _engine_status (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _battery_status
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _battery_status (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _battery_cap
     (setq _battery_cap (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _air_pressure
     (setq _air_pressure (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _air_temperature
     (setq _air_temperature (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _torque
     (setq _torque (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _load
     (setq _load (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _efficiency
     (setq _efficiency (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _voltage
     (setq _voltage (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _current
     (setq _current (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _discharge
     (setq _discharge (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _hours
     (setq _hours (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _minutes
     (setq _minutes (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _second
     (setq _second (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _health
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _health (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get hehe::sensor :md5sum-) "a0c50bebffb4e8af1cdb8ac5a415ed1d")
(setf (get hehe::sensor :datatype-) "hehe/sensor")
(setf (get hehe::sensor :definition-)
      "int16 number
int16 throttle
int16 rpm
int16 speed
float32 engine_load
int16 temperature
int16 humidity
string engine_status
string battery_status
int16 battery_cap
int16 air_pressure
int16 air_temperature
int16 torque
int16 load
int16 efficiency
int16 voltage
int16 current
int16 discharge
int16 hours
int16 minutes
int16 second
string health


")



(provide :hehe/sensor "a0c50bebffb4e8af1cdb8ac5a415ed1d")


