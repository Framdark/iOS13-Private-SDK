//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationParameters-Protocol.h>


@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>
{
    double _duration;
    id <CCUIAnimationTimingFunctionDescription> _timingFunction;
}

@property(readonly, copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
