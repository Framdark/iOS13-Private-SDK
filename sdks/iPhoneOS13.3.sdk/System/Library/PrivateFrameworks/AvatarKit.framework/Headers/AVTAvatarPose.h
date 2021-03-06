//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE, NSMutableDictionary;

@interface AVTAvatarPose : NSObject <NSCopying>
{
    BOOL _hasNeckPosition;
    BOOL _hasNeckOrientation;
    double _bakedAnimationBlendFactor;
    NSMutableDictionary *_weights;
    MISSING_TYPE *_neckPosition;
    struct {
        MISSING_TYPE *vector;
    } _neckOrientation;
}

+ (id)friendlyPose;
+ (id)neutralPose;
@property(nonatomic) double bakedAnimationBlendFactor; // @synthesize bakedAnimationBlendFactor=_bakedAnimationBlendFactor;
@property(nonatomic) struct neckOrientation; // @synthesize neckOrientation=_neckOrientation;
@property(nonatomic) MISSING_TYPE *neckPosition; // @synthesize neckPosition=_neckPosition;
// - (void).cxx_destruct;
- (id)description;
- (id)poseByMergingPose:(id)arg1;
- (BOOL)affectsPhysicsSimulation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithWeights:(id)arg1 neckPosition:(MISSING_TYPE *)arg2 neckOrientation:(struct )arg3 bakedAnimationBlendFactor:(double)arg4;
- (id)dictionaryRepresentation;
- (void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2;
- (double)weightForBlendShapeNamed:(id)arg1;
- (void)setWeights:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

