//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDAnimationRandomGenerator-Protocol.h>

__attribute__((visibility("hidden")))
@interface KNAnimationRandomGenerator : NSObject <TSDAnimationRandomGenerator>
{
    struct TSCERandGenerator _randGenerator;
    NSUInteger _seed;
}

+ (unsigned int)generateNewSeed;
+ (id)randomGeneratorFromPluginContext:(id)arg1;
@property(nonatomic) NSUInteger seed; // @synthesize seed=_seed;
- (CDStruct_818bb265)GLPoint4DRandomPoint;
- (CDStruct_03942939)GLPoint3DRandomPoint;
- (CDStruct_6e3f967a)GLPoint2DRandomPoint;
- (CDStruct_03942939)GLPoint3DRandomDirection;
- (double)doubleBetween:(double)arg1:(double)arg2;
- (long long)intBetween:(long long)arg1:(long long)arg2;
@property(readonly, nonatomic) double randomDouble;
- (void)dealloc;
- (id)initWithSeed:(id)arg1;

@end

