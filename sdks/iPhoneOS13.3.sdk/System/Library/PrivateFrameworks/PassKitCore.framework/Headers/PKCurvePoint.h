//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKCurvePoint : NSObject
{
    double _x;
    double _y;
    double _roundness;
    double _smoothness;
    CGPoint _leftTangentPoint;
    CGPoint _rightTangentPoint;
}

+ (id)pointWithX:(double)arg1 y:(double)arg2;
+ (id)pointWithCGPoint:(CGPoint)arg1;
@property double smoothness; // @synthesize smoothness=_smoothness;
@property double roundness; // @synthesize roundness=_roundness;
@property CGPoint rightTangentPoint; // @synthesize rightTangentPoint=_rightTangentPoint;
@property CGPoint leftTangentPoint; // @synthesize leftTangentPoint=_leftTangentPoint;
@property double y; // @synthesize y=_y;
@property double x; // @synthesize x=_x;
@property CGPoint CGPoint;
- (id)initWithX:(double)arg1 y:(double)arg2;

@end

