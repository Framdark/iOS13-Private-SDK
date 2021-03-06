//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface TLBacklight : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    BOOL _isObservingBacklight;
    long long _backlightStatus;
}

+ (id)sharedBacklight;
// - (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(id /* CDUnknownBlockType */)arg1;
- (void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setObservingBacklight:(BOOL)arg1;
- (void)_setBacklightStatus:(long long)arg1;
@property(readonly) long long backlightStatus;
- (void)dealloc;
- (id)init;

@end

