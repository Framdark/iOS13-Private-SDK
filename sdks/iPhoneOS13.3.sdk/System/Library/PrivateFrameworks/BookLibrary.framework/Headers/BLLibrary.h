//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMLibraryPlist;
@protocol OS_dispatch_queue;

@interface BLLibrary : NSObject
{
    IMLibraryPlist *_booksPlist;
    IMLibraryPlist *_purchasedPlist;
    IMLibraryPlist *_managedPlist;
    IMLibraryPlist *_sharedPlist;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (BOOL)_addDate:(id)arg1 toPlist:(id)arg2 bookItem:(id)arg3 error:(id )arg4;
+ (id)_bookItemsFromPlist:(id)arg1 sharedPlist:(id)arg2;
+ (id)defaultBookLibrary;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMLibraryPlist *sharedPlist; // @synthesize sharedPlist=_sharedPlist;
@property(retain, nonatomic) IMLibraryPlist *managedPlist; // @synthesize managedPlist=_managedPlist;
@property(retain, nonatomic) IMLibraryPlist *purchasedPlist; // @synthesize purchasedPlist=_purchasedPlist;
@property(retain, nonatomic) IMLibraryPlist *booksPlist; // @synthesize booksPlist=_booksPlist;
// - (void).cxx_destruct;
- (void)_bookWasOpenedWithStoreID:(id)arg1 permlink:(id)arg2 date:(id)arg3;
- (BOOL)_bookItemIsShared:(id)arg1;
- (BOOL)_addSharedBookToPurchasesPlistWithPermlink:(id)arg1 error:(id )arg2;
- (void)_downloadWithPermalink:(id)arg1 title:(id)arg2 result:(id /* CDUnknownBlockType */)arg3;
- (id)_perUserBookURLForBookURL:(id)arg1;
- (BOOL)_isShareableBook:(id)arg1;
- (BOOL)_isMultiUser;
- (id)_bookItemFromPermlink:(id)arg1 error:(id )arg2;
- (id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id )arg3;
- (id)_findBookItemWithTestBlock:(id /* CDUnknownBlockType */)arg1 foundWhere:(long long )arg2;
- (id)_list:(id)arg1 testBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_allPlists;
- (id)bookIdentifierFromURL:(id)arg1 error:(id )arg2;
- (BOOL)_removeBookFromLibraryWithPath:(id)arg1 error:(id )arg2;
- (BOOL)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)_addBookItemToEduContainer:(id)arg1 error:(id )arg2;
- (id)_lookupBookItemExhaustiveFromPermlink:(id)arg1 error:(id )arg2;
- (void)addITunesUBookToLibraryWithPermlink:(id)arg1 title:(id)arg2 result:(id /* CDUnknownBlockType */)arg3;
- (id)allBookItems;
- (id)_bookItemsFromPlist:(id)arg1;
- (id)_init;
- (id)_initWithBooksPlist:(id)arg1 purchasedPlist:(id)arg2 managedPlist:(id)arg3 sharedPlist:(id)arg4;

@end

