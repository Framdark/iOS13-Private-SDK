//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMIMotionDetection : HMFObject
{
    CGRect _boundingBox;
}

@property(readonly) CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (id)initWithBoundingBox:(CGRect)arg1;

@end
