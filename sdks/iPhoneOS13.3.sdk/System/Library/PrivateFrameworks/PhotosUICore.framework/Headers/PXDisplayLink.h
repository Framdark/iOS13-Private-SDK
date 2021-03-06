//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface PXDisplayLink : NSObject
{
    CADisplayLink *_displayLink;
    id _target;
    SEL _selector;
}

@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double currentMediaTime;
@property(readonly, nonatomic) double targetTimestamp;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
@property(nonatomic) BOOL paused;
- (id)description;
- (void)_tick:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (void)_addToRunLoop;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(BOOL)arg3;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;

@end

