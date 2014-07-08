//
//  ViewController.h
//  GroupMessaging
//
//  Created by phaniraj on 7/7/14.
//  Copyright (c) 2014 org.phaniraj. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate>

- (IBAction)chooseGroup:(id)sender;

@end
