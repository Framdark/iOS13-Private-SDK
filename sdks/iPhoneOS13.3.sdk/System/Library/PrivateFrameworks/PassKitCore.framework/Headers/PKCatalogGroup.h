//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, NSNumber;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUbiquitous;
    NSNumber *_groupID;
    NSMutableArray *_uniqueIDs;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property(retain, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToGroup:(id)arg1;
- (id)init;

@end

