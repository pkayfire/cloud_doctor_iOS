//
//  SensorOperationController.h
//  clouddoctorapp
//
//  Created by Peter Kim on 1/17/15.
//  Copyright (c) 2015 Cloud Doctor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Bolts/Bolts.h>

@interface CDSensorOperationController : NSObject

+ (BFTask *)getDiagnosisWithSensorData:(NSMutableDictionary *)sensorData
                           andSymptoms:(NSString *)symptoms;

@end
