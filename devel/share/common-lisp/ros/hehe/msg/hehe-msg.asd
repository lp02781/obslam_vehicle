
(cl:in-package :asdf)

(defsystem "hehe-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "lidar" :depends-on ("_package_lidar"))
    (:file "_package_lidar" :depends-on ("_package"))
    (:file "pixhawk" :depends-on ("_package_pixhawk"))
    (:file "_package_pixhawk" :depends-on ("_package"))
    (:file "sensor" :depends-on ("_package_sensor"))
    (:file "_package_sensor" :depends-on ("_package"))
  ))