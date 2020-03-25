//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsUpdating-Protocol.h>

@class FAFamilyMember;
@protocol CNScheduler, CNSchedulerProvider, CNUICoreContactStoreFacade;

@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating>
{
    id <CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
    FAFamilyMember *_familyMember;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) id <CNUICoreContactStoreFacade> familyMemberScopedContactStore; // @synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore;
// - (void).cxx_destruct;
- (id)updateContactWhitelistByRemovingContacts:(id)arg1;
- (id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg1;
- (id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg1 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(BOOL)arg2;
- (id)updateContactWhitelistByAddingContacts:(id)arg1;
- (id)updateContactListByRemovingContacts:(id)arg1;
- (id)updateContactListByUpdatingContacts:(id)arg1;
- (id)updateContactListByAddingContacts:(id)arg1;
@property(readonly, nonatomic) id <CNScheduler> backgroundOrImmediateScheduler;
- (id)initWithFamilyMemberScopedContactStoreFacade:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

@end

