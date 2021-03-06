//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WBBookmarkProvider-Protocol.h>

@class WebBookmarkCollection;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider>
{
    WebBookmarkCollection *_collection;
}

// - (void).cxx_destruct;
- (id)databaseHealthInformation;
- (id)bookmarkWithID:(int)arg1;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(BOOL)arg3;
- (id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2;
- (id)bookmarksMatchingString:(id)arg1;
- (void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (id)initReadonlySafariBookmarkCollection;

@end

