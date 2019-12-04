//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSWPStorage;
@protocol TSWPStyleProvider;

__attribute__((visibility("hidden")))
@interface TSWPStoragePasteboardProxy : TSPObject
{
    TSWPStorage *_storage;
    struct _NSRange _range;
    id <TSWPStyleProvider> _styleProvider;
}

@property(readonly, nonatomic) struct _NSRange storageRange; // @synthesize storageRange=_range;
- (void)saveToArchiver:(id)arg1;
- (id)initWithContext:(id)arg1 storage:(id)arg2 range:(struct _NSRange)arg3 styleProvider:(id)arg4;

@end
