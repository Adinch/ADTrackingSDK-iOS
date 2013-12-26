//
//  ADTracking.h
//
//  Created by szarajewski on 08.11.13.
//  Copyright (c) 2013 "Online Publishing Partners" LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADTracking : NSObject

//  If logger is enabled you will recieve diagnostic messages
//    about tracker workflow into xCode terminal and into asl.
//  We recommend to disable logger in release build.
//  By default logger is disabled.
+ (void) setLoggerEnable:(BOOL)flag;

//  Call this method for send tracking event
+ (void) setTrackingID:(NSString *)trackingtID;

@end
