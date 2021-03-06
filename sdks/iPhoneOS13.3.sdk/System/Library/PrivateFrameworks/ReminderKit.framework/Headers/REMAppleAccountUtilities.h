//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject
{
    BOOL _primaryICloudACAccountIsValid;
    ACAccount *_primaryICloudACAccount;
    ACAccountStore *_accountStore;
}

+ (id)accountDescriptionWithACAccount:(id)arg1;
+ (id)getAppleIDSession;
+ (id)sharedInstance;
@property(nonatomic) BOOL primaryICloudACAccountIsValid; // @synthesize primaryICloudACAccountIsValid=_primaryICloudACAccountIsValid;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (id)primaryICloudAccountCalDavService;
@property(readonly) BOOL primaryICloudAccountEnabled;
- (void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)accountStoreDidChange:(id)arg1;
- (void)invalidatePrimaryICloudACAccount;
- (void)internalInvalidatePrimaryICloudACAccount;
- (id)allICloudAccountsWithCloudKitEnabled;
@property(readonly) ACAccount *primaryICloudACAccount; // @synthesize primaryICloudACAccount=_primaryICloudACAccount;
- (id)accessQueue;
- (void)dealloc;
- (id)initForObservingAccountStoreChanges:(BOOL)arg1;
- (id)init;

@end

