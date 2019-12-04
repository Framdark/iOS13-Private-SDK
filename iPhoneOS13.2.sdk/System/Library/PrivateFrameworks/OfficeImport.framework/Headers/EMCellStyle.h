//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMStyle.h>



@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle <NSCopying>
{
    EDStyle *_edStyle;
    int _edCellType;
    double _columnWidth;
    double _contentWidth;
    _Bool _truncateContents;
    _Bool _resolvedProperties;
}

+ (id)_parseFontName:(id)arg1 nameContainsBold:(_Bool *)arg2 nameContainsItalic:(_Bool *)arg3;
+ (double)contentWidthForColumnWidth:(double)arg1;
+ (id)styleForFont:(id)arg1;
- (id)cacheFriendlyCSSStyleString;
- (id)cssStyleString;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addAlignmentStyle:(id)arg1;
- (void)addBordersStyle:(id)arg1;
- (void)addFillStyle:(id)arg1;
- (void)addFontStyle:(id)arg1;
- (void)resolveContentWidth;
- (void)resolveFormatType;
- (id)initWithEDStyle:(id)arg1 type:(int)arg2 columnWidth:(unsigned long long)arg3 contentWidth:(unsigned long long)arg4 truncateContents:(_Bool)arg5;

@end
