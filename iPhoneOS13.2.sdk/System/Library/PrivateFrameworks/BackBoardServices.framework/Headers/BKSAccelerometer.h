//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSThread;
@protocol BKSAccelerometerDelegate;

@interface BKSAccelerometer : NSObject
{
    id <BKSAccelerometerDelegate> _delegate;
    struct __CFRunLoopSource *_accelerometerEventsSource;
    struct __CFRunLoop *_accelerometerEventsRunLoop;
    double _updateInterval;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
    _Bool _passiveOrientationEvents;
    _Bool _orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property(nonatomic) _Bool orientationEventsEnabled; // @synthesize orientationEventsEnabled=_orientationEventsEnabled;
@property(nonatomic) _Bool passiveOrientationEvents; // @synthesize passiveOrientationEvents=_passiveOrientationEvents;
@property(nonatomic) float zThreshold; // @synthesize zThreshold=_zThreshold;
@property(nonatomic) float yThreshold; // @synthesize yThreshold=_yThreshold;
@property(nonatomic) float xThreshold; // @synthesize xThreshold=_xThreshold;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) __weak id <BKSAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (int)currentDeviceOrientation;
- (void)_updateOrientationServer;
- (void)_serverWasRestarted;
- (void)_checkOut;
- (void)_checkIn;
@property(nonatomic) _Bool accelerometerEventsEnabled;
- (void)dealloc;
- (id)init;

@end
