/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OADCountedGraphicFeature : NSObject
{
    id mFeature;
    unsigned long long mUsageCount;
}

@property(nonatomic) unsigned long long usageCount; // @synthesize usageCount=mUsageCount;
- (long long)compareUsageCount:(id)arg1;
- (void)incrementUsageCount;
- (id)feature;
- (void)dealloc;
- (id)initWithFeature:(id)arg1;

@end

