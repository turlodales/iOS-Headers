/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableSection.h>

#import "GKHeaderSegmentedControlDelegate-Protocol.h"

@class GKHeaderSegmentedControl, NSString;

@interface GKLeaderboardControlSection : GKTableSection <GKHeaderSegmentedControlDelegate>
{
    NSString *_title;
    GKHeaderSegmentedControl *_timeScopeSegmentedControl;
    BOOL _visible;
}

@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) GKHeaderSegmentedControl *timeScopeSegmentedControl; // @synthesize timeScopeSegmentedControl=_timeScopeSegmentedControl;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleForHeaderInTableView:(id)arg1;
- (void)headerSegmentedControlChanged:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)rowCountInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
@property(nonatomic) int timeScope; // @dynamic timeScope;
- (id)viewForSectionFooterInTableView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

