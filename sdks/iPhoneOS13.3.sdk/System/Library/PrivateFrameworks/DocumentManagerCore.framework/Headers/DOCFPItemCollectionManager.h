//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet;

@interface DOCFPItemCollectionManager : NSObject
{
    NSCountedSet *_activeCollections;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *observingCollections;
- (void)collectionDidStopObserving:(id)arg1;
- (void)collectionDidStartObserving:(id)arg1;
- (void)applicationWillEnterForegroundNotification;
- (void)applicationDidEnterBackground;
- (id)init;

@end
