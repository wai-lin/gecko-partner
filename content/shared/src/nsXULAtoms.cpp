/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public License
 * Version 1.0 (the "NPL"); you may not use this file except in
 * compliance with the NPL.  You may obtain a copy of the NPL at
 * http://www.mozilla.org/NPL/
 *
 * Software distributed under the NPL is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL
 * for the specific language governing rights and limitations under the
 * NPL.
 *
 * The Initial Developer of this code under the NPL is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights
 * Reserved.
 */

#include "nsString.h"
#include "nsINameSpaceManager.h"
#include "nsXULAtoms.h"

static const char kXULNameSpace[] = "http://www.mozilla.org/keymaster/gatekeeper/there.is.only.xul";

// XXX make this be autogenerated. doh!

PRInt32  nsXULAtoms::nameSpaceID;
nsIAtom* nsXULAtoms::button;
nsIAtom* nsXULAtoms::checkbox;
nsIAtom* nsXULAtoms::spinner;
nsIAtom* nsXULAtoms::scrollbar;
nsIAtom* nsXULAtoms::slider;
nsIAtom* nsXULAtoms::colorpicker;
nsIAtom* nsXULAtoms::fontpicker;
nsIAtom* nsXULAtoms::radio;
nsIAtom* nsXULAtoms::text;
nsIAtom* nsXULAtoms::toolbar;
nsIAtom* nsXULAtoms::toolbaritem;
nsIAtom* nsXULAtoms::toolbox;

nsIAtom* nsXULAtoms::tree;
nsIAtom* nsXULAtoms::treecaption;
nsIAtom* nsXULAtoms::treehead;
nsIAtom* nsXULAtoms::treerow;
nsIAtom* nsXULAtoms::treeitem;
nsIAtom* nsXULAtoms::treecell;
nsIAtom* nsXULAtoms::treechildren;
nsIAtom* nsXULAtoms::treeindentation;
nsIAtom* nsXULAtoms::treeallowevents;
nsIAtom* nsXULAtoms::treecol;
nsIAtom* nsXULAtoms::treecolgroup;
nsIAtom* nsXULAtoms::treefoot;
nsIAtom* nsXULAtoms::treepusher;

nsIAtom* nsXULAtoms::menu;
nsIAtom* nsXULAtoms::menuitem;
nsIAtom* nsXULAtoms::menubar;
nsIAtom* nsXULAtoms::menubutton;
nsIAtom* nsXULAtoms::menuchildren;

nsIAtom* nsXULAtoms::progressmeter;
nsIAtom* nsXULAtoms::titledbutton;
nsIAtom* nsXULAtoms::mode;

nsIAtom* nsXULAtoms::box;
nsIAtom* nsXULAtoms::flex;

nsIAtom* nsXULAtoms::tabcontrol;
nsIAtom* nsXULAtoms::tabbox;
nsIAtom* nsXULAtoms::tab;
nsIAtom* nsXULAtoms::tabpanel;
nsIAtom* nsXULAtoms::tabpage;
nsIAtom* nsXULAtoms::deck;

nsIAtom* nsXULAtoms::maxpos;
nsIAtom* nsXULAtoms::curpos;
nsIAtom* nsXULAtoms::scrollbarbutton;
nsIAtom* nsXULAtoms::increment;
nsIAtom* nsXULAtoms::pageincrement;
nsIAtom* nsXULAtoms::thumb;
nsIAtom* nsXULAtoms::toggled;
nsIAtom* nsXULAtoms::grippy;
nsIAtom* nsXULAtoms::splitter;
nsIAtom* nsXULAtoms::collapse;

nsIAtom* nsXULAtoms::widget;
nsIAtom* nsXULAtoms::window;

static nsrefcnt gRefCnt;
static nsINameSpaceManager* gNameSpaceManager;

void nsXULAtoms::AddrefAtoms() {

  if (gRefCnt == 0) {
    /* XUL Atoms registers the XUL name space ID because it's a convenient
       place to do this, if you don't want a permanent, "well-known" ID.
    */
    if (NS_SUCCEEDED(NS_NewNameSpaceManager(&gNameSpaceManager)))
//    gNameSpaceManager->CreateRootNameSpace(namespace);
      gNameSpaceManager->RegisterNameSpace(kXULNameSpace, nameSpaceID);
    else
      NS_ASSERTION(0, "failed to create xul atoms namespace manager");

    // now register the atoms
    button = NS_NewAtom("button");
    checkbox = NS_NewAtom("checkbox");
    spinner = NS_NewAtom("spinner");
    scrollbar = NS_NewAtom("scrollbar");
    slider = NS_NewAtom("slider");
    colorpicker = NS_NewAtom("colorpicker");
    fontpicker = NS_NewAtom("fontpicker");
    radio = NS_NewAtom("radio");
    text = NS_NewAtom("text");
    toolbar = NS_NewAtom("toolbar");
  	toolbaritem = NS_NewAtom("toolbaritem");
    toolbox = NS_NewAtom("toolbox");

  tree = NS_NewAtom("tree");
	treecaption = NS_NewAtom("treecaption");
	treehead = NS_NewAtom("treehead");
	treerow = NS_NewAtom("treerow");
	treecell = NS_NewAtom("treecell");
	treeitem = NS_NewAtom("treeitem");
	treechildren = NS_NewAtom("treechildren");
	treeindentation = NS_NewAtom("treeindentation");
  treeallowevents = NS_NewAtom("treeallowevents");
  treecol = NS_NewAtom("treecol");
	treecolgroup = NS_NewAtom("treecolgroup");
  treefoot = NS_NewAtom("treefoot");
  treepusher = NS_NewAtom("treepusher");

  menuitem = NS_NewAtom("menuitem");
  menubar = NS_NewAtom("menubar");
  menu = NS_NewAtom("menu");
  menubutton = NS_NewAtom("menubutton");
  menuchildren = NS_NewAtom("menuchildren");

	progressmeter = NS_NewAtom("progressmeter");
	titledbutton = NS_NewAtom("titledbutton");

	mode = NS_NewAtom("mode");
	box = NS_NewAtom("box");
	flex = NS_NewAtom("flex");

  deck = NS_NewAtom("deck");
  tabcontrol = NS_NewAtom("tabcontrol");
  tab = NS_NewAtom("tab");
  tabpanel = NS_NewAtom("tabpanel");
  tabpage = NS_NewAtom("tabpage");
  tabbox = NS_NewAtom("tabbox");
  maxpos = NS_NewAtom("maxpos");
  curpos = NS_NewAtom("curpos");
  scrollbarbutton = NS_NewAtom("scrollbarbutton");
  increment = NS_NewAtom("increment");
  pageincrement = NS_NewAtom("pageincrement");
  thumb = NS_NewAtom("thumb");
  toggled = NS_NewAtom("toggled");
  grippy = NS_NewAtom("grippy");
  splitter = NS_NewAtom("splitter");
  collapse = NS_NewAtom("collapse");


    widget = NS_NewAtom("widget");
    window = NS_NewAtom("window");
  }
  ++gRefCnt;
}

void nsXULAtoms::ReleaseAtoms() {

  NS_PRECONDITION(gRefCnt != 0, "bad release of xul atoms");
  if (--gRefCnt == 0) {
    NS_RELEASE(button);
    NS_RELEASE(checkbox);
    NS_RELEASE(spinner);
    NS_RELEASE(slider);
    NS_RELEASE(scrollbar);
    NS_RELEASE(colorpicker);
    NS_RELEASE(fontpicker);
    NS_RELEASE(radio);
    NS_RELEASE(text);
    NS_RELEASE(toolbar);
    NS_RELEASE(toolbox);

  NS_RELEASE(tree);
	NS_RELEASE(treecaption);
	NS_RELEASE(treehead);
	NS_RELEASE(treerow);
	NS_RELEASE(treecell);
	NS_RELEASE(treeitem);
	NS_RELEASE(treechildren);
	NS_RELEASE(treeindentation);
  NS_RELEASE(treeallowevents);
	NS_RELEASE(treecol);
	NS_RELEASE(treecolgroup);
  NS_RELEASE(treefoot);
  NS_RELEASE(treepusher);

  NS_RELEASE(menu);
  NS_RELEASE(menubar);
  NS_RELEASE(menuitem);
  NS_RELEASE(menubutton);
  NS_RELEASE(menuchildren);

  NS_RELEASE(progressmeter);
	NS_RELEASE(mode);

	NS_RELEASE(box);
	NS_RELEASE(flex);


 	NS_RELEASE(deck);
 	NS_RELEASE(tabcontrol);
 	NS_RELEASE(tab);
 	NS_RELEASE(tabbox);
 	NS_RELEASE(tabpanel);
 	NS_RELEASE(tabpage);
  NS_RELEASE(maxpos);
 	NS_RELEASE(curpos);
 	NS_RELEASE(scrollbarbutton);
 	NS_RELEASE(increment);
 	NS_RELEASE(pageincrement);
 	NS_RELEASE(thumb);
 	NS_RELEASE(toggled);
 	NS_RELEASE(grippy);
 	NS_RELEASE(splitter);
 	NS_RELEASE(collapse);

	NS_RELEASE(widget);
    NS_RELEASE(window);
    NS_IF_RELEASE(gNameSpaceManager);
  }
}
