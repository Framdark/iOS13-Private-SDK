//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@protocol FBApplicationDataStoreRepositoryReadingDelegate <NSObject>
- (void)storeInvalidatedForIdentifier:(NSString *)arg1;
- (void)objectChangedForKeys:(NSArray *)arg1 application:(NSString *)arg2;
@end

