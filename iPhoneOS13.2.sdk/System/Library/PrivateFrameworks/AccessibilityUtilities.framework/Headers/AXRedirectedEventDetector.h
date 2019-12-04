//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentEvents;
    AXDispatchTimer *_flushEventsTimer;
}

+ (void)setFlushEventsTimerDelay:(double)arg1;
+ (void)flushEvents;
@property(retain, nonatomic) AXDispatchTimer *flushEventsTimer; // @synthesize flushEventsTimer=_flushEventsTimer;
@property(retain, nonatomic) NSMutableArray *recentEvents; // @synthesize recentEvents=_recentEvents;
- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)isRedirectedEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)_flushEventsIfNecessary;
- (id)init;

@end
