//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PGDeduper : NSObject
{
    NSSet *_identifiersOfRequiredItems;
}

@property(copy, nonatomic) NSSet *identifiersOfRequiredItems; // @synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems;
// - (void).cxx_destruct;
- (id)requiredItemsInItems:(id)arg1;
- (BOOL)itemIsRequired:(id)arg1;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;

@end

