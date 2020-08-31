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

class sensor {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.number = null;
      this.throttle = null;
      this.rpm = null;
      this.speed = null;
      this.engine_load = null;
      this.temperature = null;
      this.humidity = null;
      this.engine_status = null;
      this.battery_status = null;
      this.battery_cap = null;
      this.air_pressure = null;
      this.air_temperature = null;
      this.torque = null;
      this.load = null;
      this.efficiency = null;
      this.voltage = null;
      this.current = null;
      this.discharge = null;
      this.hours = null;
      this.minutes = null;
      this.second = null;
      this.health = null;
    }
    else {
      if (initObj.hasOwnProperty('number')) {
        this.number = initObj.number
      }
      else {
        this.number = 0;
      }
      if (initObj.hasOwnProperty('throttle')) {
        this.throttle = initObj.throttle
      }
      else {
        this.throttle = 0;
      }
      if (initObj.hasOwnProperty('rpm')) {
        this.rpm = initObj.rpm
      }
      else {
        this.rpm = 0;
      }
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0;
      }
      if (initObj.hasOwnProperty('engine_load')) {
        this.engine_load = initObj.engine_load
      }
      else {
        this.engine_load = 0.0;
      }
      if (initObj.hasOwnProperty('temperature')) {
        this.temperature = initObj.temperature
      }
      else {
        this.temperature = 0;
      }
      if (initObj.hasOwnProperty('humidity')) {
        this.humidity = initObj.humidity
      }
      else {
        this.humidity = 0;
      }
      if (initObj.hasOwnProperty('engine_status')) {
        this.engine_status = initObj.engine_status
      }
      else {
        this.engine_status = '';
      }
      if (initObj.hasOwnProperty('battery_status')) {
        this.battery_status = initObj.battery_status
      }
      else {
        this.battery_status = '';
      }
      if (initObj.hasOwnProperty('battery_cap')) {
        this.battery_cap = initObj.battery_cap
      }
      else {
        this.battery_cap = 0;
      }
      if (initObj.hasOwnProperty('air_pressure')) {
        this.air_pressure = initObj.air_pressure
      }
      else {
        this.air_pressure = 0;
      }
      if (initObj.hasOwnProperty('air_temperature')) {
        this.air_temperature = initObj.air_temperature
      }
      else {
        this.air_temperature = 0;
      }
      if (initObj.hasOwnProperty('torque')) {
        this.torque = initObj.torque
      }
      else {
        this.torque = 0;
      }
      if (initObj.hasOwnProperty('load')) {
        this.load = initObj.load
      }
      else {
        this.load = 0;
      }
      if (initObj.hasOwnProperty('efficiency')) {
        this.efficiency = initObj.efficiency
      }
      else {
        this.efficiency = 0;
      }
      if (initObj.hasOwnProperty('voltage')) {
        this.voltage = initObj.voltage
      }
      else {
        this.voltage = 0;
      }
      if (initObj.hasOwnProperty('current')) {
        this.current = initObj.current
      }
      else {
        this.current = 0;
      }
      if (initObj.hasOwnProperty('discharge')) {
        this.discharge = initObj.discharge
      }
      else {
        this.discharge = 0;
      }
      if (initObj.hasOwnProperty('hours')) {
        this.hours = initObj.hours
      }
      else {
        this.hours = 0;
      }
      if (initObj.hasOwnProperty('minutes')) {
        this.minutes = initObj.minutes
      }
      else {
        this.minutes = 0;
      }
      if (initObj.hasOwnProperty('second')) {
        this.second = initObj.second
      }
      else {
        this.second = 0;
      }
      if (initObj.hasOwnProperty('health')) {
        this.health = initObj.health
      }
      else {
        this.health = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type sensor
    // Serialize message field [number]
    bufferOffset = _serializer.int16(obj.number, buffer, bufferOffset);
    // Serialize message field [throttle]
    bufferOffset = _serializer.int16(obj.throttle, buffer, bufferOffset);
    // Serialize message field [rpm]
    bufferOffset = _serializer.int16(obj.rpm, buffer, bufferOffset);
    // Serialize message field [speed]
    bufferOffset = _serializer.int16(obj.speed, buffer, bufferOffset);
    // Serialize message field [engine_load]
    bufferOffset = _serializer.float32(obj.engine_load, buffer, bufferOffset);
    // Serialize message field [temperature]
    bufferOffset = _serializer.int16(obj.temperature, buffer, bufferOffset);
    // Serialize message field [humidity]
    bufferOffset = _serializer.int16(obj.humidity, buffer, bufferOffset);
    // Serialize message field [engine_status]
    bufferOffset = _serializer.string(obj.engine_status, buffer, bufferOffset);
    // Serialize message field [battery_status]
    bufferOffset = _serializer.string(obj.battery_status, buffer, bufferOffset);
    // Serialize message field [battery_cap]
    bufferOffset = _serializer.int16(obj.battery_cap, buffer, bufferOffset);
    // Serialize message field [air_pressure]
    bufferOffset = _serializer.int16(obj.air_pressure, buffer, bufferOffset);
    // Serialize message field [air_temperature]
    bufferOffset = _serializer.int16(obj.air_temperature, buffer, bufferOffset);
    // Serialize message field [torque]
    bufferOffset = _serializer.int16(obj.torque, buffer, bufferOffset);
    // Serialize message field [load]
    bufferOffset = _serializer.int16(obj.load, buffer, bufferOffset);
    // Serialize message field [efficiency]
    bufferOffset = _serializer.int16(obj.efficiency, buffer, bufferOffset);
    // Serialize message field [voltage]
    bufferOffset = _serializer.int16(obj.voltage, buffer, bufferOffset);
    // Serialize message field [current]
    bufferOffset = _serializer.int16(obj.current, buffer, bufferOffset);
    // Serialize message field [discharge]
    bufferOffset = _serializer.int16(obj.discharge, buffer, bufferOffset);
    // Serialize message field [hours]
    bufferOffset = _serializer.int16(obj.hours, buffer, bufferOffset);
    // Serialize message field [minutes]
    bufferOffset = _serializer.int16(obj.minutes, buffer, bufferOffset);
    // Serialize message field [second]
    bufferOffset = _serializer.int16(obj.second, buffer, bufferOffset);
    // Serialize message field [health]
    bufferOffset = _serializer.string(obj.health, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type sensor
    let len;
    let data = new sensor(null);
    // Deserialize message field [number]
    data.number = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [throttle]
    data.throttle = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [rpm]
    data.rpm = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [speed]
    data.speed = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [engine_load]
    data.engine_load = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [temperature]
    data.temperature = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [humidity]
    data.humidity = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [engine_status]
    data.engine_status = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [battery_status]
    data.battery_status = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [battery_cap]
    data.battery_cap = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [air_pressure]
    data.air_pressure = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [air_temperature]
    data.air_temperature = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [torque]
    data.torque = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [load]
    data.load = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [efficiency]
    data.efficiency = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [voltage]
    data.voltage = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [current]
    data.current = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [discharge]
    data.discharge = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [hours]
    data.hours = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [minutes]
    data.minutes = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [second]
    data.second = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [health]
    data.health = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.engine_status.length;
    length += object.battery_status.length;
    length += object.health.length;
    return length + 52;
  }

  static datatype() {
    // Returns string type for a message object
    return 'hehe/sensor';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a0c50bebffb4e8af1cdb8ac5a415ed1d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16 number
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
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new sensor(null);
    if (msg.number !== undefined) {
      resolved.number = msg.number;
    }
    else {
      resolved.number = 0
    }

    if (msg.throttle !== undefined) {
      resolved.throttle = msg.throttle;
    }
    else {
      resolved.throttle = 0
    }

    if (msg.rpm !== undefined) {
      resolved.rpm = msg.rpm;
    }
    else {
      resolved.rpm = 0
    }

    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0
    }

    if (msg.engine_load !== undefined) {
      resolved.engine_load = msg.engine_load;
    }
    else {
      resolved.engine_load = 0.0
    }

    if (msg.temperature !== undefined) {
      resolved.temperature = msg.temperature;
    }
    else {
      resolved.temperature = 0
    }

    if (msg.humidity !== undefined) {
      resolved.humidity = msg.humidity;
    }
    else {
      resolved.humidity = 0
    }

    if (msg.engine_status !== undefined) {
      resolved.engine_status = msg.engine_status;
    }
    else {
      resolved.engine_status = ''
    }

    if (msg.battery_status !== undefined) {
      resolved.battery_status = msg.battery_status;
    }
    else {
      resolved.battery_status = ''
    }

    if (msg.battery_cap !== undefined) {
      resolved.battery_cap = msg.battery_cap;
    }
    else {
      resolved.battery_cap = 0
    }

    if (msg.air_pressure !== undefined) {
      resolved.air_pressure = msg.air_pressure;
    }
    else {
      resolved.air_pressure = 0
    }

    if (msg.air_temperature !== undefined) {
      resolved.air_temperature = msg.air_temperature;
    }
    else {
      resolved.air_temperature = 0
    }

    if (msg.torque !== undefined) {
      resolved.torque = msg.torque;
    }
    else {
      resolved.torque = 0
    }

    if (msg.load !== undefined) {
      resolved.load = msg.load;
    }
    else {
      resolved.load = 0
    }

    if (msg.efficiency !== undefined) {
      resolved.efficiency = msg.efficiency;
    }
    else {
      resolved.efficiency = 0
    }

    if (msg.voltage !== undefined) {
      resolved.voltage = msg.voltage;
    }
    else {
      resolved.voltage = 0
    }

    if (msg.current !== undefined) {
      resolved.current = msg.current;
    }
    else {
      resolved.current = 0
    }

    if (msg.discharge !== undefined) {
      resolved.discharge = msg.discharge;
    }
    else {
      resolved.discharge = 0
    }

    if (msg.hours !== undefined) {
      resolved.hours = msg.hours;
    }
    else {
      resolved.hours = 0
    }

    if (msg.minutes !== undefined) {
      resolved.minutes = msg.minutes;
    }
    else {
      resolved.minutes = 0
    }

    if (msg.second !== undefined) {
      resolved.second = msg.second;
    }
    else {
      resolved.second = 0
    }

    if (msg.health !== undefined) {
      resolved.health = msg.health;
    }
    else {
      resolved.health = ''
    }

    return resolved;
    }
};

module.exports = sensor;
