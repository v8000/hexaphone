//
//  LoopPickerViewController.h
//  Hexatone
//
//  Created by Glenn Barnett on 5/8/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HexaphoneAppDelegate;
@class Loop;

@interface LoopPickerViewController : UITableViewController {
	HexaphoneAppDelegate* appDelegate;
	
	UITableView *tableView;
	UIImageView *imageView;
}

@property (retain, nonatomic) HexaphoneAppDelegate* appDelegate;

//@property (nonatomic, retain) IBOutlet UITableView *tableView;
//@property (nonatomic, retain) IBOutlet UIImageView *imageView;

-(void) show;
-(void) hide;
-(Loop*) getRecentLoop:(int) index;

@end
