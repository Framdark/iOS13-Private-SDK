//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPParagraphStyle.h>

__attribute__((visibility("hidden")))
@interface TSWPTOCEntryStyle : TSWPParagraphStyle
{
}

+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
- (id)parentStyleForFixingOrphanVariation;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TOCEntryStyleArchive )arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_saveTOCEntryStylePropertiesToArchive:(struct TOCEntryStylePropertiesArchive )arg1 archiver:(id)arg2;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TOCEntryStylePropertiesArchive )arg2 unarchiver:(id)arg3;
- (id)presetKind;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (id)initWithContext:(id)arg1 name:(id)arg2 basedOnParagraphStyle:(id)arg3;

@end

