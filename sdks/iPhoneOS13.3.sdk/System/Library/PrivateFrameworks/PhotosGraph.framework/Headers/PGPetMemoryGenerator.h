//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator
{
}

- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 )arg3 enumerationBlock:(id /* CDUnknownBlockType */)arg4;
- (void)_potentialPetMemoryForPet:(id)arg1 results:(id /* CDUnknownBlockType */)arg2;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (id)confidenceThresholdByWhitelistedSceneIdentifier;

@end

