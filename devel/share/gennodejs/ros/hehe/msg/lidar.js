// Auto-generated. Do not edit!

// (in-package hehe.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class lidar {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.number = null;
      this.angle_min = null;
      this.angle_max = null;
      this.angle_inc = null;
      this.time_inc = null;
      this.scan_time = null;
      this.range_min = null;
      this.range_max = null;
      this.range_size = null;
      this.count = null;
      this.countless = null;
      this.lidar_ranges_1 = null;
      this.lidar_ranges_2 = null;
      this.lidar_ranges_3 = null;
      this.lidar_ranges_4 = null;
      this.lidar_ranges_5 = null;
      this.lidar_ranges_6 = null;
      this.lidar_ranges_7 = null;
      this.lidar_ranges_8 = null;
      this.lidar_ranges_9 = null;
      this.lidar_ranges_10 = null;
      this.lidar_ranges_11 = null;
      this.lidar_ranges_12 = null;
      this.lidar_ranges_13 = null;
      this.lidar_ranges_14 = null;
      this.lidar_ranges_15 = null;
      this.lidar_ranges_16 = null;
      this.lidar_ranges_17 = null;
      this.lidar_ranges_18 = null;
      this.lidar_ranges_19 = null;
      this.lidar_ranges_20 = null;
      this.lidar_ranges_21 = null;
      this.lidar_ranges_22 = null;
      this.lidar_ranges_23 = null;
      this.lidar_ranges_24 = null;
    }
    else {
      if (initObj.hasOwnProperty('number')) {
        this.number = initObj.number
      }
      else {
        this.number = 0;
      }
      if (initObj.hasOwnProperty('angle_min')) {
        this.angle_min = initObj.angle_min
      }
      else {
        this.angle_min = 0.0;
      }
      if (initObj.hasOwnProperty('angle_max')) {
        this.angle_max = initObj.angle_max
      }
      else {
        this.angle_max = 0.0;
      }
      if (initObj.hasOwnProperty('angle_inc')) {
        this.angle_inc = initObj.angle_inc
      }
      else {
        this.angle_inc = 0.0;
      }
      if (initObj.hasOwnProperty('time_inc')) {
        this.time_inc = initObj.time_inc
      }
      else {
        this.time_inc = 0.0;
      }
      if (initObj.hasOwnProperty('scan_time')) {
        this.scan_time = initObj.scan_time
      }
      else {
        this.scan_time = 0.0;
      }
      if (initObj.hasOwnProperty('range_min')) {
        this.range_min = initObj.range_min
      }
      else {
        this.range_min = 0.0;
      }
      if (initObj.hasOwnProperty('range_max')) {
        this.range_max = initObj.range_max
      }
      else {
        this.range_max = 0.0;
      }
      if (initObj.hasOwnProperty('range_size')) {
        this.range_size = initObj.range_size
      }
      else {
        this.range_size = 0;
      }
      if (initObj.hasOwnProperty('count')) {
        this.count = initObj.count
      }
      else {
        this.count = 0;
      }
      if (initObj.hasOwnProperty('countless')) {
        this.countless = initObj.countless
      }
      else {
        this.countless = 0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_1')) {
        this.lidar_ranges_1 = initObj.lidar_ranges_1
      }
      else {
        this.lidar_ranges_1 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_2')) {
        this.lidar_ranges_2 = initObj.lidar_ranges_2
      }
      else {
        this.lidar_ranges_2 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_3')) {
        this.lidar_ranges_3 = initObj.lidar_ranges_3
      }
      else {
        this.lidar_ranges_3 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_4')) {
        this.lidar_ranges_4 = initObj.lidar_ranges_4
      }
      else {
        this.lidar_ranges_4 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_5')) {
        this.lidar_ranges_5 = initObj.lidar_ranges_5
      }
      else {
        this.lidar_ranges_5 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_6')) {
        this.lidar_ranges_6 = initObj.lidar_ranges_6
      }
      else {
        this.lidar_ranges_6 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_7')) {
        this.lidar_ranges_7 = initObj.lidar_ranges_7
      }
      else {
        this.lidar_ranges_7 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_8')) {
        this.lidar_ranges_8 = initObj.lidar_ranges_8
      }
      else {
        this.lidar_ranges_8 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_9')) {
        this.lidar_ranges_9 = initObj.lidar_ranges_9
      }
      else {
        this.lidar_ranges_9 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_10')) {
        this.lidar_ranges_10 = initObj.lidar_ranges_10
      }
      else {
        this.lidar_ranges_10 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_11')) {
        this.lidar_ranges_11 = initObj.lidar_ranges_11
      }
      else {
        this.lidar_ranges_11 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_12')) {
        this.lidar_ranges_12 = initObj.lidar_ranges_12
      }
      else {
        this.lidar_ranges_12 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_13')) {
        this.lidar_ranges_13 = initObj.lidar_ranges_13
      }
      else {
        this.lidar_ranges_13 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_14')) {
        this.lidar_ranges_14 = initObj.lidar_ranges_14
      }
      else {
        this.lidar_ranges_14 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_15')) {
        this.lidar_ranges_15 = initObj.lidar_ranges_15
      }
      else {
        this.lidar_ranges_15 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_16')) {
        this.lidar_ranges_16 = initObj.lidar_ranges_16
      }
      else {
        this.lidar_ranges_16 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_17')) {
        this.lidar_ranges_17 = initObj.lidar_ranges_17
      }
      else {
        this.lidar_ranges_17 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_18')) {
        this.lidar_ranges_18 = initObj.lidar_ranges_18
      }
      else {
        this.lidar_ranges_18 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_19')) {
        this.lidar_ranges_19 = initObj.lidar_ranges_19
      }
      else {
        this.lidar_ranges_19 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_20')) {
        this.lidar_ranges_20 = initObj.lidar_ranges_20
      }
      else {
        this.lidar_ranges_20 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_21')) {
        this.lidar_ranges_21 = initObj.lidar_ranges_21
      }
      else {
        this.lidar_ranges_21 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_22')) {
        this.lidar_ranges_22 = initObj.lidar_ranges_22
      }
      else {
        this.lidar_ranges_22 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_23')) {
        this.lidar_ranges_23 = initObj.lidar_ranges_23
      }
      else {
        this.lidar_ranges_23 = 0.0;
      }
      if (initObj.hasOwnProperty('lidar_ranges_24')) {
        this.lidar_ranges_24 = initObj.lidar_ranges_24
      }
      else {
        this.lidar_ranges_24 = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type lidar
    // Serialize message field [number]
    bufferOffset = _serializer.int16(obj.number, buffer, bufferOffset);
    // Serialize message field [angle_min]
    bufferOffset = _serializer.float32(obj.angle_min, buffer, bufferOffset);
    // Serialize message field [angle_max]
    bufferOffset = _serializer.float32(obj.angle_max, buffer, bufferOffset);
    // Serialize message field [angle_inc]
    bufferOffset = _serializer.float32(obj.angle_inc, buffer, bufferOffset);
    // Serialize message field [time_inc]
    bufferOffset = _serializer.float32(obj.time_inc, buffer, bufferOffset);
    // Serialize message field [scan_time]
    bufferOffset = _serializer.float32(obj.scan_time, buffer, bufferOffset);
    // Serialize message field [range_min]
    bufferOffset = _serializer.float32(obj.range_min, buffer, bufferOffset);
    // Serialize message field [range_max]
    bufferOffset = _serializer.float32(obj.range_max, buffer, bufferOffset);
    // Serialize message field [range_size]
    bufferOffset = _serializer.int16(obj.range_size, buffer, bufferOffset);
    // Serialize message field [count]
    bufferOffset = _serializer.int16(obj.count, buffer, bufferOffset);
    // Serialize message field [countless]
    bufferOffset = _serializer.int16(obj.countless, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_1]
    bufferOffset = _serializer.float32(obj.lidar_ranges_1, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_2]
    bufferOffset = _serializer.float32(obj.lidar_ranges_2, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_3]
    bufferOffset = _serializer.float32(obj.lidar_ranges_3, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_4]
    bufferOffset = _serializer.float32(obj.lidar_ranges_4, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_5]
    bufferOffset = _serializer.float32(obj.lidar_ranges_5, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_6]
    bufferOffset = _serializer.float32(obj.lidar_ranges_6, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_7]
    bufferOffset = _serializer.float32(obj.lidar_ranges_7, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_8]
    bufferOffset = _serializer.float32(obj.lidar_ranges_8, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_9]
    bufferOffset = _serializer.float32(obj.lidar_ranges_9, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_10]
    bufferOffset = _serializer.float32(obj.lidar_ranges_10, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_11]
    bufferOffset = _serializer.float32(obj.lidar_ranges_11, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_12]
    bufferOffset = _serializer.float32(obj.lidar_ranges_12, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_13]
    bufferOffset = _serializer.float32(obj.lidar_ranges_13, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_14]
    bufferOffset = _serializer.float32(obj.lidar_ranges_14, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_15]
    bufferOffset = _serializer.float32(obj.lidar_ranges_15, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_16]
    bufferOffset = _serializer.float32(obj.lidar_ranges_16, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_17]
    bufferOffset = _serializer.float32(obj.lidar_ranges_17, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_18]
    bufferOffset = _serializer.float32(obj.lidar_ranges_18, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_19]
    bufferOffset = _serializer.float32(obj.lidar_ranges_19, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_20]
    bufferOffset = _serializer.float32(obj.lidar_ranges_20, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_21]
    bufferOffset = _serializer.float32(obj.lidar_ranges_21, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_22]
    bufferOffset = _serializer.float32(obj.lidar_ranges_22, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_23]
    bufferOffset = _serializer.float32(obj.lidar_ranges_23, buffer, bufferOffset);
    // Serialize message field [lidar_ranges_24]
    bufferOffset = _serializer.float32(obj.lidar_ranges_24, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type lidar
    let len;
    let data = new lidar(null);
    // Deserialize message field [number]
    data.number = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [angle_min]
    data.angle_min = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [angle_max]
    data.angle_max = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [angle_inc]
    data.angle_inc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [time_inc]
    data.time_inc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [scan_time]
    data.scan_time = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [range_min]
    data.range_min = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [range_max]
    data.range_max = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [range_size]
    data.range_size = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [count]
    data.count = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [countless]
    data.countless = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_1]
    data.lidar_ranges_1 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_2]
    data.lidar_ranges_2 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_3]
    data.lidar_ranges_3 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_4]
    data.lidar_ranges_4 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_5]
    data.lidar_ranges_5 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_6]
    data.lidar_ranges_6 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_7]
    data.lidar_ranges_7 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_8]
    data.lidar_ranges_8 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_9]
    data.lidar_ranges_9 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_10]
    data.lidar_ranges_10 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_11]
    data.lidar_ranges_11 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_12]
    data.lidar_ranges_12 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_13]
    data.lidar_ranges_13 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_14]
    data.lidar_ranges_14 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_15]
    data.lidar_ranges_15 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_16]
    data.lidar_ranges_16 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_17]
    data.lidar_ranges_17 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_18]
    data.lidar_ranges_18 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_19]
    data.lidar_ranges_19 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_20]
    data.lidar_ranges_20 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_21]
    data.lidar_ranges_21 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_22]
    data.lidar_ranges_22 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_23]
    data.lidar_ranges_23 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lidar_ranges_24]
    data.lidar_ranges_24 = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 132;
  }

  static datatype() {
    // Returns string type for a message object
    return 'hehe/lidar';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c5f50167c14b9c625c4d23ea090650d0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16 number
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
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new lidar(null);
    if (msg.number !== undefined) {
      resolved.number = msg.number;
    }
    else {
      resolved.number = 0
    }

    if (msg.angle_min !== undefined) {
      resolved.angle_min = msg.angle_min;
    }
    else {
      resolved.angle_min = 0.0
    }

    if (msg.angle_max !== undefined) {
      resolved.angle_max = msg.angle_max;
    }
    else {
      resolved.angle_max = 0.0
    }

    if (msg.angle_inc !== undefined) {
      resolved.angle_inc = msg.angle_inc;
    }
    else {
      resolved.angle_inc = 0.0
    }

    if (msg.time_inc !== undefined) {
      resolved.time_inc = msg.time_inc;
    }
    else {
      resolved.time_inc = 0.0
    }

    if (msg.scan_time !== undefined) {
      resolved.scan_time = msg.scan_time;
    }
    else {
      resolved.scan_time = 0.0
    }

    if (msg.range_min !== undefined) {
      resolved.range_min = msg.range_min;
    }
    else {
      resolved.range_min = 0.0
    }

    if (msg.range_max !== undefined) {
      resolved.range_max = msg.range_max;
    }
    else {
      resolved.range_max = 0.0
    }

    if (msg.range_size !== undefined) {
      resolved.range_size = msg.range_size;
    }
    else {
      resolved.range_size = 0
    }

    if (msg.count !== undefined) {
      resolved.count = msg.count;
    }
    else {
      resolved.count = 0
    }

    if (msg.countless !== undefined) {
      resolved.countless = msg.countless;
    }
    else {
      resolved.countless = 0
    }

    if (msg.lidar_ranges_1 !== undefined) {
      resolved.lidar_ranges_1 = msg.lidar_ranges_1;
    }
    else {
      resolved.lidar_ranges_1 = 0.0
    }

    if (msg.lidar_ranges_2 !== undefined) {
      resolved.lidar_ranges_2 = msg.lidar_ranges_2;
    }
    else {
      resolved.lidar_ranges_2 = 0.0
    }

    if (msg.lidar_ranges_3 !== undefined) {
      resolved.lidar_ranges_3 = msg.lidar_ranges_3;
    }
    else {
      resolved.lidar_ranges_3 = 0.0
    }

    if (msg.lidar_ranges_4 !== undefined) {
      resolved.lidar_ranges_4 = msg.lidar_ranges_4;
    }
    else {
      resolved.lidar_ranges_4 = 0.0
    }

    if (msg.lidar_ranges_5 !== undefined) {
      resolved.lidar_ranges_5 = msg.lidar_ranges_5;
    }
    else {
      resolved.lidar_ranges_5 = 0.0
    }

    if (msg.lidar_ranges_6 !== undefined) {
      resolved.lidar_ranges_6 = msg.lidar_ranges_6;
    }
    else {
      resolved.lidar_ranges_6 = 0.0
    }

    if (msg.lidar_ranges_7 !== undefined) {
      resolved.lidar_ranges_7 = msg.lidar_ranges_7;
    }
    else {
      resolved.lidar_ranges_7 = 0.0
    }

    if (msg.lidar_ranges_8 !== undefined) {
      resolved.lidar_ranges_8 = msg.lidar_ranges_8;
    }
    else {
      resolved.lidar_ranges_8 = 0.0
    }

    if (msg.lidar_ranges_9 !== undefined) {
      resolved.lidar_ranges_9 = msg.lidar_ranges_9;
    }
    else {
      resolved.lidar_ranges_9 = 0.0
    }

    if (msg.lidar_ranges_10 !== undefined) {
      resolved.lidar_ranges_10 = msg.lidar_ranges_10;
    }
    else {
      resolved.lidar_ranges_10 = 0.0
    }

    if (msg.lidar_ranges_11 !== undefined) {
      resolved.lidar_ranges_11 = msg.lidar_ranges_11;
    }
    else {
      resolved.lidar_ranges_11 = 0.0
    }

    if (msg.lidar_ranges_12 !== undefined) {
      resolved.lidar_ranges_12 = msg.lidar_ranges_12;
    }
    else {
      resolved.lidar_ranges_12 = 0.0
    }

    if (msg.lidar_ranges_13 !== undefined) {
      resolved.lidar_ranges_13 = msg.lidar_ranges_13;
    }
    else {
      resolved.lidar_ranges_13 = 0.0
    }

    if (msg.lidar_ranges_14 !== undefined) {
      resolved.lidar_ranges_14 = msg.lidar_ranges_14;
    }
    else {
      resolved.lidar_ranges_14 = 0.0
    }

    if (msg.lidar_ranges_15 !== undefined) {
      resolved.lidar_ranges_15 = msg.lidar_ranges_15;
    }
    else {
      resolved.lidar_ranges_15 = 0.0
    }

    if (msg.lidar_ranges_16 !== undefined) {
      resolved.lidar_ranges_16 = msg.lidar_ranges_16;
    }
    else {
      resolved.lidar_ranges_16 = 0.0
    }

    if (msg.lidar_ranges_17 !== undefined) {
      resolved.lidar_ranges_17 = msg.lidar_ranges_17;
    }
    else {
      resolved.lidar_ranges_17 = 0.0
    }

    if (msg.lidar_ranges_18 !== undefined) {
      resolved.lidar_ranges_18 = msg.lidar_ranges_18;
    }
    else {
      resolved.lidar_ranges_18 = 0.0
    }

    if (msg.lidar_ranges_19 !== undefined) {
      resolved.lidar_ranges_19 = msg.lidar_ranges_19;
    }
    else {
      resolved.lidar_ranges_19 = 0.0
    }

    if (msg.lidar_ranges_20 !== undefined) {
      resolved.lidar_ranges_20 = msg.lidar_ranges_20;
    }
    else {
      resolved.lidar_ranges_20 = 0.0
    }

    if (msg.lidar_ranges_21 !== undefined) {
      resolved.lidar_ranges_21 = msg.lidar_ranges_21;
    }
    else {
      resolved.lidar_ranges_21 = 0.0
    }

    if (msg.lidar_ranges_22 !== undefined) {
      resolved.lidar_ranges_22 = msg.lidar_ranges_22;
    }
    else {
      resolved.lidar_ranges_22 = 0.0
    }

    if (msg.lidar_ranges_23 !== undefined) {
      resolved.lidar_ranges_23 = msg.lidar_ranges_23;
    }
    else {
      resolved.lidar_ranges_23 = 0.0
    }

    if (msg.lidar_ranges_24 !== undefined) {
      resolved.lidar_ranges_24 = msg.lidar_ranges_24;
    }
    else {
      resolved.lidar_ranges_24 = 0.0
    }

    return resolved;
    }
};

module.exports = lidar;
