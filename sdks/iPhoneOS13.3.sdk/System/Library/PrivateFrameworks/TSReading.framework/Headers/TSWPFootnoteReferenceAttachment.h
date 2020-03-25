//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPTextualAttachment.h>

@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment
{
    TSWPStorage *_containedStorage;
    NSString *_customMarkString;
}

@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
@property(retain, nonatomic) NSString *customMarkString; // @synthesize customMarkString=_customMarkString;
- (void)checkDebug;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (BOOL)isSearchable;
- (id)stringEquivalent;
- (NSUInteger)findCharIndex;
- (void)setParentStorage:(id)arg1;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)elementKind;
- (void)applyMark;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;

@end

