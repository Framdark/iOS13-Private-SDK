//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSString, REMChangeToken, REMObjectID;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;
    NSArray *_changes;
    REMObjectID *_accountID;
    NSString *_storeID;
    NSString *_author;
    REMChangeToken *_token;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) REMChangeToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

