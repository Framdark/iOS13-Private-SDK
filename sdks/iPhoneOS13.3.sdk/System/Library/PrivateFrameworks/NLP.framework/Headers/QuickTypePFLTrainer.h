//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface QuickTypePFLTrainer : NSObject
{
    NSUInteger _batchSize;
    NSNumber *_learningRate;
    NSUInteger _maxSequenceLength;
    NSString *_updatedModelPath;
}

@property(readonly, copy, nonatomic) NSString *updatedModelPath; // @synthesize updatedModelPath=_updatedModelPath;
@property(readonly, nonatomic) NSUInteger maxSequenceLength; // @synthesize maxSequenceLength=_maxSequenceLength;
@property(copy, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property(nonatomic) NSUInteger batchSize; // @synthesize batchSize=_batchSize;
- (void)reset;
- (float )copyWeightUpdates:(NSUInteger )arg1;
- (id)evaluateOn:(id)arg1;
- (void)trainOn:(id)arg1 forNEpochs:(NSUInteger)arg2 andKeepInMemory:(BOOL)arg3;
- (void)trainAndKeepInMemory:(id)arg1 forNEpochs:(NSUInteger)arg2;
- (void)trainOn:(id)arg1 forNEpochs:(NSUInteger)arg2;
- (id)initWithSeedModelPath:(id)arg1;

@end

