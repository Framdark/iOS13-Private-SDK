//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _generateDeletedObjects;
    BOOL _failIfNotFound;
    BOOL _notifyObservers;
    BOOL _secureDelete;
    id /* CDUnknownBlockType */ _recursiveDeleteAuthorizationBlock;
    NSString *_restrictedSourceBundleIdentifier;
    Class _entityClass;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(copy, nonatomic) NSString *restrictedSourceBundleIdentifier; // @synthesize restrictedSourceBundleIdentifier=_restrictedSourceBundleIdentifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recursiveDeleteAuthorizationBlock; // @synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock;
@property(nonatomic) BOOL secureDelete; // @synthesize secureDelete=_secureDelete;
@property(nonatomic) BOOL notifyObservers; // @synthesize notifyObservers=_notifyObservers;
@property(nonatomic) BOOL failIfNotFound; // @synthesize failIfNotFound=_failIfNotFound;
@property(nonatomic) BOOL generateDeletedObjects; // @synthesize generateDeletedObjects=_generateDeletedObjects;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
