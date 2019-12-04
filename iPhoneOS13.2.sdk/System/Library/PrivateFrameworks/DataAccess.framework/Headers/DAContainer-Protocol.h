//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DACardDAVRecord-Protocol.h>

@class CNContainer, NSData, NSString;

@protocol DAContainer <DACardDAVRecord>
@property(nonatomic, getter=isGuardianStateDirty) _Bool guardianStateDirty;
@property(nonatomic, getter=isGuardianRestricted) _Bool guardianRestricted;
- (CNContainer *)asContainer;
- (void *)asSource;
- (void)markAsDefault;
- (_Bool)isSearchContainer;
- (void)setArePropertiesReadonly:(_Bool)arg1;
- (_Bool)arePropertiesReadonly;
- (void)setContentReadonly:(_Bool)arg1;
- (_Bool)isContentReadonly;
- (void)setAccountIdentifier:(NSString *)arg1;
- (NSString *)accountIdentifier;
- (void)setMeContactIdentifier:(NSString *)arg1;
- (NSString *)meContactIdentifier;
- (void)setConstraintsPath:(NSString *)arg1;
- (NSString *)constraintsPath;
- (void)setSyncData:(NSData *)arg1;
- (NSData *)syncData;
- (void)setSyncTag:(NSString *)arg1;
- (NSString *)syncTag;
- (void)setCTag:(NSString *)arg1;
- (NSString *)cTag;
- (void)setExternalIdentifier:(NSString *)arg1;
- (NSString *)externalIdentifier;
- (void)setType:(long long)arg1;
- (long long)type;
- (_Bool)isLocal;
- (void)setName:(NSString *)arg1;
- (NSString *)name;
- (NSString *)identifier;
@end
