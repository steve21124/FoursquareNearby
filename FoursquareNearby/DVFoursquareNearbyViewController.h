//
//  DVFoursquareNearbyViewController.h
//  FoursquareNearby
//
//  Created by Ilya Puchka on 23.11.12.
//  Copyright (c) 2012 Denivip. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DVFoursquareNearbyViewController : UITableViewController

@property (nonatomic, copy) NSString *initialSearchQuery;
@property (nonatomic) BOOL searchEnabled;
@property (nonatomic) BOOL refreshEnabled;

@end
