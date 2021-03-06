//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEventMonitorDelegate-Protocol.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject <CSEventMonitorDelegate>
{
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    id /* CDUnknownBlockType */ _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (void)notifyCallback;
- (void)notifyCallback:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)_checkAllConditionsEnabled;
- (void)subscribeEventMonitor:(id)arg1;
- (void)addConditions:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (void)setCallback:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

