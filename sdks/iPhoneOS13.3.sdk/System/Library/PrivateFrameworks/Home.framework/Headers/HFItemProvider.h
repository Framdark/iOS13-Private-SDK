//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet;

@interface HFItemProvider : NSObject <NSCopying>
{
    NSSet *_clientInvalidationReasons;
}

+ (BOOL)prefersNonBlockingReloads;
@property(retain, nonatomic) NSSet *clientInvalidationReasons; // @synthesize clientInvalidationReasons=_clientInvalidationReasons;
// - (void).cxx_destruct;
- (id)invalidationReasons;
@property(readonly, nonatomic) NSSet *items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(id /* CDUnknownBlockType */)arg2 itemMap:(id /* CDUnknownBlockType */)arg3;
- (id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(id /* CDUnknownBlockType */)arg2 itemAdaptor:(id /* CDUnknownBlockType */)arg3 filter:(id /* CDUnknownBlockType */)arg4 itemMap:(id /* CDUnknownBlockType */)arg5;

@end

