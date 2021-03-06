//
//  AppDelegate.h
//  clouddoctorapp
//
//  Created by Peter Kim on 1/16/15.
//  Copyright (c) 2015 Cloud Doctor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property BOOL inDeliveryMode;
@property NSString *deliveryID;
@property NSDictionary *diagnosis;

- (void)setupSpeechKitConnection;

@end

