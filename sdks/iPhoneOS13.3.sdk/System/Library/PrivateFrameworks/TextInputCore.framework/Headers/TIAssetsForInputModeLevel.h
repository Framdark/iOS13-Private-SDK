//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject
{
    NSMutableDictionary *_assetsByAttributes;
    long long _numberOfAssertions;
    NSString *_inputModeLevel;
}

@property(readonly, nonatomic) NSString *inputModeLevel; // @synthesize inputModeLevel=_inputModeLevel;
// - (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)removeEmptyAssets;
- (BOOL)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (BOOL)hasAssertions;
- (void)removeAssertion;
- (void)addAssertion;
- (id)assetContentItemsMatching:(id)arg1;
- (void)addAsset:(id)arg1;
- (id)assetVersionsForAttributes:(id)arg1;
- (void)gatherStatistics:(id)arg1;
- (id)recursiveDescription;
- (id)initWithInputModeLevel:(id)arg1;

@end
