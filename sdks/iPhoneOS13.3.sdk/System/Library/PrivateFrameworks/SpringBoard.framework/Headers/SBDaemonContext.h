//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

// - (void).cxx_destruct;
- (id)description;
- (void)removeRequestForKey:(id)arg1;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (int)pid;
- (id)initWithPid:(int)arg1 queue:(id)arg2;

@end

