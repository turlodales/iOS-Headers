//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString;

@protocol MKLocationProvider <NSObject>
@property(readonly, nonatomic) BOOL isSimulation;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(nonatomic) int activityType;
@property(readonly, nonatomic) BOOL airplaneModeBlocksLocation;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property(nonatomic) int headingOrientation;
@property(nonatomic) BOOL matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end

