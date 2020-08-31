; Auto-generated. Do not edit!


(cl:in-package hehe-msg)


;//! \htmlinclude lidar.msg.html

(cl:defclass <lidar> (roslisp-msg-protocol:ros-message)
  ((number
    :reader number
    :initarg :number
    :type cl:fixnum
    :initform 0)
   (angle_min
    :reader angle_min
    :initarg :angle_min
    :type cl:float
    :initform 0.0)
   (angle_max
    :reader angle_max
    :initarg :angle_max
    :type cl:float
    :initform 0.0)
   (angle_inc
    :reader angle_inc
    :initarg :angle_inc
    :type cl:float
    :initform 0.0)
   (time_inc
    :reader time_inc
    :initarg :time_inc
    :type cl:float
    :initform 0.0)
   (scan_time
    :reader scan_time
    :initarg :scan_time
    :type cl:float
    :initform 0.0)
   (range_min
    :reader range_min
    :initarg :range_min
    :type cl:float
    :initform 0.0)
   (range_max
    :reader range_max
    :initarg :range_max
    :type cl:float
    :initform 0.0)
   (range_size
    :reader range_size
    :initarg :range_size
    :type cl:fixnum
    :initform 0)
   (count
    :reader count
    :initarg :count
    :type cl:fixnum
    :initform 0)
   (countless
    :reader countless
    :initarg :countless
    :type cl:fixnum
    :initform 0)
   (lidar_ranges_1
    :reader lidar_ranges_1
    :initarg :lidar_ranges_1
    :type cl:float
    :initform 0.0)
   (lidar_ranges_2
    :reader lidar_ranges_2
    :initarg :lidar_ranges_2
    :type cl:float
    :initform 0.0)
   (lidar_ranges_3
    :reader lidar_ranges_3
    :initarg :lidar_ranges_3
    :type cl:float
    :initform 0.0)
   (lidar_ranges_4
    :reader lidar_ranges_4
    :initarg :lidar_ranges_4
    :type cl:float
    :initform 0.0)
   (lidar_ranges_5
    :reader lidar_ranges_5
    :initarg :lidar_ranges_5
    :type cl:float
    :initform 0.0)
   (lidar_ranges_6
    :reader lidar_ranges_6
    :initarg :lidar_ranges_6
    :type cl:float
    :initform 0.0)
   (lidar_ranges_7
    :reader lidar_ranges_7
    :initarg :lidar_ranges_7
    :type cl:float
    :initform 0.0)
   (lidar_ranges_8
    :reader lidar_ranges_8
    :initarg :lidar_ranges_8
    :type cl:float
    :initform 0.0)
   (lidar_ranges_9
    :reader lidar_ranges_9
    :initarg :lidar_ranges_9
    :type cl:float
    :initform 0.0)
   (lidar_ranges_10
    :reader lidar_ranges_10
    :initarg :lidar_ranges_10
    :type cl:float
    :initform 0.0)
   (lidar_ranges_11
    :reader lidar_ranges_11
    :initarg :lidar_ranges_11
    :type cl:float
    :initform 0.0)
   (lidar_ranges_12
    :reader lidar_ranges_12
    :initarg :lidar_ranges_12
    :type cl:float
    :initform 0.0)
   (lidar_ranges_13
    :reader lidar_ranges_13
    :initarg :lidar_ranges_13
    :type cl:float
    :initform 0.0)
   (lidar_ranges_14
    :reader lidar_ranges_14
    :initarg :lidar_ranges_14
    :type cl:float
    :initform 0.0)
   (lidar_ranges_15
    :reader lidar_ranges_15
    :initarg :lidar_ranges_15
    :type cl:float
    :initform 0.0)
   (lidar_ranges_16
    :reader lidar_ranges_16
    :initarg :lidar_ranges_16
    :type cl:float
    :initform 0.0)
   (lidar_ranges_17
    :reader lidar_ranges_17
    :initarg :lidar_ranges_17
    :type cl:float
    :initform 0.0)
   (lidar_ranges_18
    :reader lidar_ranges_18
    :initarg :lidar_ranges_18
    :type cl:float
    :initform 0.0)
   (lidar_ranges_19
    :reader lidar_ranges_19
    :initarg :lidar_ranges_19
    :type cl:float
    :initform 0.0)
   (lidar_ranges_20
    :reader lidar_ranges_20
    :initarg :lidar_ranges_20
    :type cl:float
    :initform 0.0)
   (lidar_ranges_21
    :reader lidar_ranges_21
    :initarg :lidar_ranges_21
    :type cl:float
    :initform 0.0)
   (lidar_ranges_22
    :reader lidar_ranges_22
    :initarg :lidar_ranges_22
    :type cl:float
    :initform 0.0)
   (lidar_ranges_23
    :reader lidar_ranges_23
    :initarg :lidar_ranges_23
    :type cl:float
    :initform 0.0)
   (lidar_ranges_24
    :reader lidar_ranges_24
    :initarg :lidar_ranges_24
    :type cl:float
    :initform 0.0))
)

(cl:defclass lidar (<lidar>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <lidar>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'lidar)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hehe-msg:<lidar> is deprecated: use hehe-msg:lidar instead.")))

(cl:ensure-generic-function 'number-val :lambda-list '(m))
(cl:defmethod number-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:number-val is deprecated.  Use hehe-msg:number instead.")
  (number m))

(cl:ensure-generic-function 'angle_min-val :lambda-list '(m))
(cl:defmethod angle_min-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:angle_min-val is deprecated.  Use hehe-msg:angle_min instead.")
  (angle_min m))

(cl:ensure-generic-function 'angle_max-val :lambda-list '(m))
(cl:defmethod angle_max-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:angle_max-val is deprecated.  Use hehe-msg:angle_max instead.")
  (angle_max m))

(cl:ensure-generic-function 'angle_inc-val :lambda-list '(m))
(cl:defmethod angle_inc-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:angle_inc-val is deprecated.  Use hehe-msg:angle_inc instead.")
  (angle_inc m))

(cl:ensure-generic-function 'time_inc-val :lambda-list '(m))
(cl:defmethod time_inc-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:time_inc-val is deprecated.  Use hehe-msg:time_inc instead.")
  (time_inc m))

(cl:ensure-generic-function 'scan_time-val :lambda-list '(m))
(cl:defmethod scan_time-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:scan_time-val is deprecated.  Use hehe-msg:scan_time instead.")
  (scan_time m))

(cl:ensure-generic-function 'range_min-val :lambda-list '(m))
(cl:defmethod range_min-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:range_min-val is deprecated.  Use hehe-msg:range_min instead.")
  (range_min m))

(cl:ensure-generic-function 'range_max-val :lambda-list '(m))
(cl:defmethod range_max-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:range_max-val is deprecated.  Use hehe-msg:range_max instead.")
  (range_max m))

(cl:ensure-generic-function 'range_size-val :lambda-list '(m))
(cl:defmethod range_size-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:range_size-val is deprecated.  Use hehe-msg:range_size instead.")
  (range_size m))

(cl:ensure-generic-function 'count-val :lambda-list '(m))
(cl:defmethod count-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:count-val is deprecated.  Use hehe-msg:count instead.")
  (count m))

(cl:ensure-generic-function 'countless-val :lambda-list '(m))
(cl:defmethod countless-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:countless-val is deprecated.  Use hehe-msg:countless instead.")
  (countless m))

(cl:ensure-generic-function 'lidar_ranges_1-val :lambda-list '(m))
(cl:defmethod lidar_ranges_1-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_1-val is deprecated.  Use hehe-msg:lidar_ranges_1 instead.")
  (lidar_ranges_1 m))

(cl:ensure-generic-function 'lidar_ranges_2-val :lambda-list '(m))
(cl:defmethod lidar_ranges_2-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_2-val is deprecated.  Use hehe-msg:lidar_ranges_2 instead.")
  (lidar_ranges_2 m))

(cl:ensure-generic-function 'lidar_ranges_3-val :lambda-list '(m))
(cl:defmethod lidar_ranges_3-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_3-val is deprecated.  Use hehe-msg:lidar_ranges_3 instead.")
  (lidar_ranges_3 m))

(cl:ensure-generic-function 'lidar_ranges_4-val :lambda-list '(m))
(cl:defmethod lidar_ranges_4-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_4-val is deprecated.  Use hehe-msg:lidar_ranges_4 instead.")
  (lidar_ranges_4 m))

(cl:ensure-generic-function 'lidar_ranges_5-val :lambda-list '(m))
(cl:defmethod lidar_ranges_5-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_5-val is deprecated.  Use hehe-msg:lidar_ranges_5 instead.")
  (lidar_ranges_5 m))

(cl:ensure-generic-function 'lidar_ranges_6-val :lambda-list '(m))
(cl:defmethod lidar_ranges_6-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_6-val is deprecated.  Use hehe-msg:lidar_ranges_6 instead.")
  (lidar_ranges_6 m))

(cl:ensure-generic-function 'lidar_ranges_7-val :lambda-list '(m))
(cl:defmethod lidar_ranges_7-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_7-val is deprecated.  Use hehe-msg:lidar_ranges_7 instead.")
  (lidar_ranges_7 m))

(cl:ensure-generic-function 'lidar_ranges_8-val :lambda-list '(m))
(cl:defmethod lidar_ranges_8-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_8-val is deprecated.  Use hehe-msg:lidar_ranges_8 instead.")
  (lidar_ranges_8 m))

(cl:ensure-generic-function 'lidar_ranges_9-val :lambda-list '(m))
(cl:defmethod lidar_ranges_9-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_9-val is deprecated.  Use hehe-msg:lidar_ranges_9 instead.")
  (lidar_ranges_9 m))

(cl:ensure-generic-function 'lidar_ranges_10-val :lambda-list '(m))
(cl:defmethod lidar_ranges_10-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_10-val is deprecated.  Use hehe-msg:lidar_ranges_10 instead.")
  (lidar_ranges_10 m))

(cl:ensure-generic-function 'lidar_ranges_11-val :lambda-list '(m))
(cl:defmethod lidar_ranges_11-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_11-val is deprecated.  Use hehe-msg:lidar_ranges_11 instead.")
  (lidar_ranges_11 m))

(cl:ensure-generic-function 'lidar_ranges_12-val :lambda-list '(m))
(cl:defmethod lidar_ranges_12-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_12-val is deprecated.  Use hehe-msg:lidar_ranges_12 instead.")
  (lidar_ranges_12 m))

(cl:ensure-generic-function 'lidar_ranges_13-val :lambda-list '(m))
(cl:defmethod lidar_ranges_13-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_13-val is deprecated.  Use hehe-msg:lidar_ranges_13 instead.")
  (lidar_ranges_13 m))

(cl:ensure-generic-function 'lidar_ranges_14-val :lambda-list '(m))
(cl:defmethod lidar_ranges_14-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_14-val is deprecated.  Use hehe-msg:lidar_ranges_14 instead.")
  (lidar_ranges_14 m))

(cl:ensure-generic-function 'lidar_ranges_15-val :lambda-list '(m))
(cl:defmethod lidar_ranges_15-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_15-val is deprecated.  Use hehe-msg:lidar_ranges_15 instead.")
  (lidar_ranges_15 m))

(cl:ensure-generic-function 'lidar_ranges_16-val :lambda-list '(m))
(cl:defmethod lidar_ranges_16-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_16-val is deprecated.  Use hehe-msg:lidar_ranges_16 instead.")
  (lidar_ranges_16 m))

(cl:ensure-generic-function 'lidar_ranges_17-val :lambda-list '(m))
(cl:defmethod lidar_ranges_17-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_17-val is deprecated.  Use hehe-msg:lidar_ranges_17 instead.")
  (lidar_ranges_17 m))

(cl:ensure-generic-function 'lidar_ranges_18-val :lambda-list '(m))
(cl:defmethod lidar_ranges_18-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_18-val is deprecated.  Use hehe-msg:lidar_ranges_18 instead.")
  (lidar_ranges_18 m))

(cl:ensure-generic-function 'lidar_ranges_19-val :lambda-list '(m))
(cl:defmethod lidar_ranges_19-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_19-val is deprecated.  Use hehe-msg:lidar_ranges_19 instead.")
  (lidar_ranges_19 m))

(cl:ensure-generic-function 'lidar_ranges_20-val :lambda-list '(m))
(cl:defmethod lidar_ranges_20-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_20-val is deprecated.  Use hehe-msg:lidar_ranges_20 instead.")
  (lidar_ranges_20 m))

(cl:ensure-generic-function 'lidar_ranges_21-val :lambda-list '(m))
(cl:defmethod lidar_ranges_21-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_21-val is deprecated.  Use hehe-msg:lidar_ranges_21 instead.")
  (lidar_ranges_21 m))

(cl:ensure-generic-function 'lidar_ranges_22-val :lambda-list '(m))
(cl:defmethod lidar_ranges_22-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_22-val is deprecated.  Use hehe-msg:lidar_ranges_22 instead.")
  (lidar_ranges_22 m))

(cl:ensure-generic-function 'lidar_ranges_23-val :lambda-list '(m))
(cl:defmethod lidar_ranges_23-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_23-val is deprecated.  Use hehe-msg:lidar_ranges_23 instead.")
  (lidar_ranges_23 m))

(cl:ensure-generic-function 'lidar_ranges_24-val :lambda-list '(m))
(cl:defmethod lidar_ranges_24-val ((m <lidar>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hehe-msg:lidar_ranges_24-val is deprecated.  Use hehe-msg:lidar_ranges_24 instead.")
  (lidar_ranges_24 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <lidar>) ostream)
  "Serializes a message object of type '<lidar>"
  (cl:let* ((signed (cl:slot-value msg 'number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'angle_min))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'angle_max))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'angle_inc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'time_inc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'scan_time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'range_min))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'range_max))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'range_size)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'count)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'countless)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_3))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_4))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_5))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_6))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_7))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_8))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_9))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_10))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_11))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_12))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_13))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_14))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_15))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_16))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_17))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_18))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_19))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_20))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_21))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_22))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_23))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lidar_ranges_24))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <lidar>) istream)
  "Deserializes a message object of type '<lidar>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'number) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'angle_min) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'angle_max) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'angle_inc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time_inc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'scan_time) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'range_min) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'range_max) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'range_size) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'count) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'countless) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_1) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_2) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_3) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_4) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_5) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_6) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_7) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_8) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_9) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_10) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_11) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_12) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_13) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_14) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_15) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_16) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_17) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_18) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_19) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_20) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_21) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_22) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_23) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lidar_ranges_24) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<lidar>)))
  "Returns string type for a message object of type '<lidar>"
  "hehe/lidar")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'lidar)))
  "Returns string type for a message object of type 'lidar"
  "hehe/lidar")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<lidar>)))
  "Returns md5sum for a message object of type '<lidar>"
  "c5f50167c14b9c625c4d23ea090650d0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'lidar)))
  "Returns md5sum for a message object of type 'lidar"
  "c5f50167c14b9c625c4d23ea090650d0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<lidar>)))
  "Returns full string definition for message of type '<lidar>"
  (cl:format cl:nil "int16 number~%float32 angle_min~%float32 angle_max~%float32 angle_inc~%float32 time_inc~%float32 scan_time~%float32 range_min~%float32 range_max~%int16 range_size~%int16 count~%int16 countless~%float32 lidar_ranges_1~%float32 lidar_ranges_2~%float32 lidar_ranges_3~%float32 lidar_ranges_4~%float32 lidar_ranges_5~%float32 lidar_ranges_6~%float32 lidar_ranges_7~%float32 lidar_ranges_8~%float32 lidar_ranges_9~%float32 lidar_ranges_10~%float32 lidar_ranges_11~%float32 lidar_ranges_12~%float32 lidar_ranges_13~%float32 lidar_ranges_14~%float32 lidar_ranges_15~%float32 lidar_ranges_16~%float32 lidar_ranges_17~%float32 lidar_ranges_18~%float32 lidar_ranges_19~%float32 lidar_ranges_20~%float32 lidar_ranges_21~%float32 lidar_ranges_22~%float32 lidar_ranges_23~%float32 lidar_ranges_24~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'lidar)))
  "Returns full string definition for message of type 'lidar"
  (cl:format cl:nil "int16 number~%float32 angle_min~%float32 angle_max~%float32 angle_inc~%float32 time_inc~%float32 scan_time~%float32 range_min~%float32 range_max~%int16 range_size~%int16 count~%int16 countless~%float32 lidar_ranges_1~%float32 lidar_ranges_2~%float32 lidar_ranges_3~%float32 lidar_ranges_4~%float32 lidar_ranges_5~%float32 lidar_ranges_6~%float32 lidar_ranges_7~%float32 lidar_ranges_8~%float32 lidar_ranges_9~%float32 lidar_ranges_10~%float32 lidar_ranges_11~%float32 lidar_ranges_12~%float32 lidar_ranges_13~%float32 lidar_ranges_14~%float32 lidar_ranges_15~%float32 lidar_ranges_16~%float32 lidar_ranges_17~%float32 lidar_ranges_18~%float32 lidar_ranges_19~%float32 lidar_ranges_20~%float32 lidar_ranges_21~%float32 lidar_ranges_22~%float32 lidar_ranges_23~%float32 lidar_ranges_24~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <lidar>))
  (cl:+ 0
     2
     4
     4
     4
     4
     4
     4
     4
     2
     2
     2
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <lidar>))
  "Converts a ROS message object to a list"
  (cl:list 'lidar
    (cl:cons ':number (number msg))
    (cl:cons ':angle_min (angle_min msg))
    (cl:cons ':angle_max (angle_max msg))
    (cl:cons ':angle_inc (angle_inc msg))
    (cl:cons ':time_inc (time_inc msg))
    (cl:cons ':scan_time (scan_time msg))
    (cl:cons ':range_min (range_min msg))
    (cl:cons ':range_max (range_max msg))
    (cl:cons ':range_size (range_size msg))
    (cl:cons ':count (count msg))
    (cl:cons ':countless (countless msg))
    (cl:cons ':lidar_ranges_1 (lidar_ranges_1 msg))
    (cl:cons ':lidar_ranges_2 (lidar_ranges_2 msg))
    (cl:cons ':lidar_ranges_3 (lidar_ranges_3 msg))
    (cl:cons ':lidar_ranges_4 (lidar_ranges_4 msg))
    (cl:cons ':lidar_ranges_5 (lidar_ranges_5 msg))
    (cl:cons ':lidar_ranges_6 (lidar_ranges_6 msg))
    (cl:cons ':lidar_ranges_7 (lidar_ranges_7 msg))
    (cl:cons ':lidar_ranges_8 (lidar_ranges_8 msg))
    (cl:cons ':lidar_ranges_9 (lidar_ranges_9 msg))
    (cl:cons ':lidar_ranges_10 (lidar_ranges_10 msg))
    (cl:cons ':lidar_ranges_11 (lidar_ranges_11 msg))
    (cl:cons ':lidar_ranges_12 (lidar_ranges_12 msg))
    (cl:cons ':lidar_ranges_13 (lidar_ranges_13 msg))
    (cl:cons ':lidar_ranges_14 (lidar_ranges_14 msg))
    (cl:cons ':lidar_ranges_15 (lidar_ranges_15 msg))
    (cl:cons ':lidar_ranges_16 (lidar_ranges_16 msg))
    (cl:cons ':lidar_ranges_17 (lidar_ranges_17 msg))
    (cl:cons ':lidar_ranges_18 (lidar_ranges_18 msg))
    (cl:cons ':lidar_ranges_19 (lidar_ranges_19 msg))
    (cl:cons ':lidar_ranges_20 (lidar_ranges_20 msg))
    (cl:cons ':lidar_ranges_21 (lidar_ranges_21 msg))
    (cl:cons ':lidar_ranges_22 (lidar_ranges_22 msg))
    (cl:cons ':lidar_ranges_23 (lidar_ranges_23 msg))
    (cl:cons ':lidar_ranges_24 (lidar_ranges_24 msg))
))
