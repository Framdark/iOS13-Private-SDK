//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOComposedRoute, GEOPBTransitStop, NSArray;

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding>
{
    GEOComposedRoute *_composedRoute;
    long long _type;
    _NSRange _pointRange;
    _NSRange _stepRange;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(readonly, nonatomic) _NSRange stepRange; // @synthesize stepRange=_stepRange;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)_MapsCarPlay_isEqual:(id)arg1;
@property(readonly, nonatomic) GEOPBTransitStop *endingTransitStop;
@property(readonly, nonatomic) GEOPBTransitStop *startingTransitStop;
- (double)remainingTimeAlongLegFromStepIndex:(NSUInteger)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingDistanceAlongLegFromStepIndex:(NSUInteger)arg1 currentStepRemainingDistance:(double)arg2;
@property(readonly, nonatomic) NSUInteger numberOfTransitStops;
@property(readonly, nonatomic) double expectedTime;
- (BOOL)contains:(id)arg1;
@property(readonly, nonatomic) NSArray *steps;
@property(readonly, nonatomic) NSUInteger stepCount;
@property(readonly, nonatomic) NSUInteger endStepIndex;
@property(readonly, nonatomic) NSUInteger startStepIndex;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) unsigned int endPointIndex;
@property(readonly, nonatomic) unsigned int startPointIndex;
@property(readonly, nonatomic) _NSRange transitStepRange;
@property(readonly, nonatomic) int transportType;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(_NSRange)arg3 pointRange:(_NSRange)arg4;

@end

