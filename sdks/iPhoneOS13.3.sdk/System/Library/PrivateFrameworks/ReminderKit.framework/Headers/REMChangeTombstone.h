//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString, NSUUID;

@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_objectIdentifier;
    NSString *_externalIdentifier;
    NSNumber *_daIsEventOnlyContainer;
    NSUUID *_shareeOwningListIdentifier;
    NSString *_shareeDisplayName;
    NSString *_shareeAddress;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *shareeAddress; // @synthesize shareeAddress=_shareeAddress;
@property(readonly, nonatomic) NSString *shareeDisplayName; // @synthesize shareeDisplayName=_shareeDisplayName;
@property(readonly, nonatomic) NSUUID *shareeOwningListIdentifier; // @synthesize shareeOwningListIdentifier=_shareeOwningListIdentifier;
@property(readonly, nonatomic) NSNumber *daIsEventOnlyContainer; // @synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer;
@property(readonly, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(readonly, nonatomic) NSUUID *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
