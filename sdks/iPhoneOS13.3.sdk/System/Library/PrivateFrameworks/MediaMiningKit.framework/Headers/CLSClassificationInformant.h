//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSClassificationInformant : CLSInformant
{
}

+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (double)_confidenceForCount:(NSUInteger)arg1 mu:(double)arg2 sigma:(double)arg3;

@end

