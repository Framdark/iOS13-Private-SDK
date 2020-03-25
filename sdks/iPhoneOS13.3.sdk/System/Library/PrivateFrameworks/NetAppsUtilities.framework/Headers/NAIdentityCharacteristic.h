//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAEquatable-Protocol.h>
#import <NetAppsUtilities/NAHashable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NAIdentityCharacteristic : NSObject <NAHashable, NAEquatable, NSCopying>
{
    id /* CDUnknownBlockType */ _retrievalBlock;
    id /* CDUnknownBlockType */ _comparisonBlock;
    id /* CDUnknownBlockType */ _hashBlock;
    long long _role;
}

@property(nonatomic) long long role; // @synthesize role=_role;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hashBlock; // @synthesize hashBlock=_hashBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ retrievalBlock; // @synthesize retrievalBlock=_retrievalBlock;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
