//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDPIdentifier, NSMutableDictionary, NSString;
@protocol CKDProtocolTranslatorIdentityDelegate;

@interface CKDProtocolTranslator : NSObject
{
    BOOL _dontCreateValidatingParentReferences;
    NSString *_packageStagingDirectory;
    NSString *_orgAdminUserID;
    long long _databaseScope;
    id <CKDProtocolTranslatorIdentityDelegate> _identityDelegate;
    NSString *_containerScopedUserID;
    NSString *_overriddenContainerScopedUserID;
    NSMutableDictionary *_downloadPreauthorizationMap;
}

+ (id)translatorIgnoringUserIDsWithPackageStagingDirectory:(id)arg1 databaseScope:(long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *downloadPreauthorizationMap; // @synthesize downloadPreauthorizationMap=_downloadPreauthorizationMap;
@property(copy, nonatomic) NSString *overriddenContainerScopedUserID; // @synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(nonatomic) __weak id <CKDProtocolTranslatorIdentityDelegate> identityDelegate; // @synthesize identityDelegate=_identityDelegate;
@property(readonly, nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(copy, nonatomic) NSString *orgAdminUserID; // @synthesize orgAdminUserID=_orgAdminUserID;
@property(copy, nonatomic) NSString *packageStagingDirectory; // @synthesize packageStagingDirectory=_packageStagingDirectory;
@property(nonatomic) BOOL dontCreateValidatingParentReferences; // @synthesize dontCreateValidatingParentReferences=_dontCreateValidatingParentReferences;
// - (void).cxx_destruct;
- (id)identityFromPUser:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAliasWithHashedStringID:(id)arg1 type:(int)arg2;
- (id)pAliasWithPhoneNumber:(id)arg1;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)pAliasWithIdentityLookupInfo:(id)arg1;
- (id)notificationFromPPushMessage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1 forCache:(BOOL)arg2;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id )arg2;
- (id)pShareFromShare:(id)arg1 forCache:(BOOL)arg2;
- (id)shareFromPShare:(id)arg1 error:(id )arg2;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (NSUInteger)capabilitiesFromPZoneCapabilities:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)recordZoneFromPRecordZone:(id)arg1 error:(id )arg2;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id )arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id )arg2;
- (id)pQueryFromQuery:(id)arg1 error:(id )arg2;
- (id)streamingAssetFromPStreamingAsset:(id)arg1 error:(id )arg2;
- (id)pStreamingAssetFromStreamingAsset:(id)arg1 forCache:(BOOL)arg2;
- (id)pPackageFromPackage:(id)arg1;
- (id)packageFromPPackage:(id)arg1 error:(id )arg2;
- (id)pAssetFromAsset:(id)arg1;
- (id)assetFromPAsset:(id)arg1 error:(id )arg2;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(BOOL)arg2 outDeletedMergeFields:(id )arg3 outKeysToSend:(id )arg4;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(BOOL)arg2;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(BOOL)arg2;
- (BOOL)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg1;
- (id)recordFromPRecord:(id)arg1 error:(id )arg2;
- (id)pReferenceFromReference:(id)arg1 error:(id )arg2;
- (id)referenceFromPReference:(id)arg1 error:(id )arg2;
- (id)recordIDFromPShareIdentifier:(id)arg1 error:(id )arg2;
- (id)pShareIdentifierFromRecordID:(id)arg1;
- (id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id )arg2;
- (id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg1;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id )arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id )arg2;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg1;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)recordIDFromPUserName:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) CKDPIdentifier *pUserID;
- (BOOL)_isDefaultUserNameFromClient:(id)arg1;
- (BOOL)_isDefaultUserNameFromServer:(id)arg1;
- (void)consumeResponseHeader:(id)arg1;
- (id)initWithPackageStagingDirectory:(id)arg1 databaseScope:(long long)arg2;
- (id)initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 packageStagingDirectory:(id)arg3 databaseScope:(long long)arg4;
- (id)_initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 packageStagingDirectory:(id)arg3 databaseScope:(long long)arg4;
- (id)pFieldActionWithLocation:(long long)arg1 length:(NSUInteger)arg2 values:(id)arg3;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2 forCache:(BOOL)arg3;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)encryptedObjectRepresentationFromFieldValue:(id)arg1;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2 forCache:(BOOL)arg3;
- (id)encryptedFieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)fieldValueFromObject:(id)arg1;
- (id)fieldValueFromObject:(id)arg1 forCache:(BOOL)arg2;
- (BOOL)objectIsAnEncryptedType:(id)arg1;
- (int)fieldValueTypeFromObject:(id)arg1;
- (int)fieldValueTypeFromEncryptedDataObject:(id)arg1 isInList:(BOOL)arg2;

@end
