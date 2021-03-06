//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSArray, NSMutableSet;

@interface NTKVideoListingFactory : NSObject
{
    CLKDevice *_device;
    NSArray *_butterflyListings;
    NSArray *_jellyfishListings;
    NSArray *_flowerListings;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;
// - (void).cxx_destruct;
- (void)discardAssets;
- (void)setVideoListingHasAssets:(id)arg1;
- (id)_listingsWithTheme:(NSUInteger)arg1 notMatchingVariant:(long long)arg2 matchingTag:(NSUInteger)arg3;
- (id)_listingsWithTheme:(NSUInteger)arg1 variant:(long long)arg2 tag:(NSUInteger)arg3 notMatchingClip:(long long)arg4;
- (id)_listingWithTheme:(NSUInteger)arg1 variant:(long long)arg2 tag:(NSUInteger)arg3;
- (id)_listingsWithTheme:(NSUInteger)arg1 notMatchingVariant:(long long)arg2;
- (id)_listingsWithTheme:(NSUInteger)arg1 variant:(long long)arg2;
- (id)_listingsWithTheme:(NSUInteger)arg1;
- (id)_initLibraryForDevice:(id)arg1;
- (long long)behaviorForTheme:(NSUInteger)arg1;
- (id)posterImageWithTheme:(NSUInteger)arg1;
- (id)anyListingWithTheme:(NSUInteger)arg1 notMatchingVariant:(long long)arg2 matchingTag:(NSUInteger)arg3;
- (id)anyListingWithTheme:(NSUInteger)arg1 variant:(long long)arg2 tag:(NSUInteger)arg3 notMatchingClip:(long long)arg4;
- (id)anyListingWithTheme:(NSUInteger)arg1 variant:(long long)arg2 tag:(NSUInteger)arg3;
- (id)defaultListingWithTheme:(NSUInteger)arg1;

@end

