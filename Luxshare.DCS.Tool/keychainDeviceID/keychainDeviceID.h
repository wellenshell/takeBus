//
//  keychainDeviceID.h
//  keychainDeviceID
//
//  Created by C.K.Lian on 16/3/11.
//  Copyright © 2016年 C.K.Lian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface keychainDeviceID : NSObject

/**
 *  获取UUID作为设备唯一标志符
 *
 *  @return
 */
+ (NSString *)getUUID;
/**
 *  从keychain删除DeviceID，一般不会用到
 */
+ (void)deleteDeviceID;
@end
